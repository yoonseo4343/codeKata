#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<int> visited(n,0);
    queue<int> que;
    for(int i=0;i<n;i++){
        if(visited[i]==1)
            continue;
        que.push(i);
        visited[i]=1;
        
        while(!que.empty()){
            int a=que.front();
            que.pop();
            for(int j=0;j<n;j++){
                //이미방문 건뛰
                if(visited[j]==1)
                    continue;
                if(computers[a][j]==1)
                {
                    que.push(j);
                    visited[j]=1;
                }
            }
        }
        answer++;
    }
    return answer;
}