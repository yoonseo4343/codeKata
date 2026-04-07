#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;

    vector <vector<tuple<int,int>>> info(N+1);
    for(auto it:road){
        info[it[0]].push_back({it[1],it[2]});
        info[it[1]].push_back({it[0],it[2]});
    }
    
    vector<int> visited(N+1, 0);// 가능한 곳 체크
    
    queue<tuple<int,int>> que;// 위치 및 가중치
    que.push({1,0});
    visited[1]=1;
    while(!que.empty()){
        auto[c,w]=que.front();
        que.pop();
        for(auto it:info[c]){
            auto[nx,t]=it;// 다음 노드, 시간
            // 1은 안됨
            if(nx==1)
                continue;
            // 방문체크
            if(visited[nx]!=0&&visited[nx]<w+t)
                continue;
            // 가중치 체크
            if(w+t>K)
                continue;
            que.push({nx,w+t});
            visited[nx]=w+t;
        }
    }

    answer=N-count(visited.begin(), visited.end(), 0)+1;
    
    return answer;
}