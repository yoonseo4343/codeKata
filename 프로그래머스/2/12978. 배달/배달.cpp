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
    
    vector<int> visited(N+1, 1e9);// 가능한 곳 체크
    
    // queue<tuple<int,int>> que;// 위치 및 가중치
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0,1});// 거리, 노드
    visited[1]=1;
    while(!pq.empty()){
        auto[w,c]=pq.top();
        pq.pop();
        for(auto it:info[c]){
            auto[nx,t]=it;// 다음 노드, 시간
            // 방문체크
            if(visited[nx]<w+t)
                continue;
            // 가중치 체크
            if(w+t>K)
                continue;
            pq.push({w+t,nx});
            visited[nx]=w+t;
        }
    }

    for(auto it:visited){
        if(it<=K)
            answer++;
    }
    
    return answer;
}