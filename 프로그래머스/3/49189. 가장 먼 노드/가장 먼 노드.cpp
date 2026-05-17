#include <string>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int>>graph(n+1);
    for(auto it:edge){
        graph[it[0]].push_back(it[1]);
        graph[it[1]].push_back(it[0]);
    }
    //방문
    vector<int>visit(n+1,-1);
    queue<tuple<int,int>>que;
    que.push({1,0});
    visit[1]=0;
    while(!que.empty()){
        auto [c,w]=que.front();
        que.pop();
        for(int next:graph[c]){
            //이미방문
            if(visit[next]!=-1)
                continue;
            que.push({next,w+1});
            visit[next]=w+1;
        }
    }
    sort(visit.begin(),visit.end());
    for(int i=visit.size()-1;i>=0;i--){
        if(visit[i]==visit[visit.size()-1])
            answer++;
        else
            break;
    }
    return answer;
}