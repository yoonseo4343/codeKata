#include <string>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<int> answer;
    vector<vector<int>>graph(n+1);
    for(auto it:roads){
        graph[it[0]].push_back(it[1]);
        graph[it[1]].push_back(it[0]);
    }
    for(int s:sources){
        if(s==destination){
            answer.push_back(0);
            continue;
        }
        queue<tuple<int,int>>que;
        que.push({s,0});
        vector<int>visit(n+1,0);
        visit[s]=1;
        bool goal=false;
        while(!que.empty()){
            auto [c,w]=que.front();
            que.pop();
            for(int next:graph[c]){
                //도착체크
                if(next==destination){
                    goal=true;
                    answer.push_back(w+1);
                    que={};
                    break;
                }
                //방문체크
                if(visit[next]==1)
                    continue;
                que.push({next,w+1});
                visit[next]=1;
            }
        }
        if(!goal)
            answer.push_back(-1);
    }
    return answer;
}