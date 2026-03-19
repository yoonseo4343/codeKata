#include <iostream>
#include <tuple>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int ans=0;
    int n;
    cin>>n;
    
    vector<vector<int>> house;
    for(int i=0;i<n;i++){
        vector<int> tmp;
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            tmp.push_back(t);
        }
        house.push_back(tmp);
    }
    
    // 튜플에 x,y,방향 넣음
    int dx[3]={1,1,0};
    int dy[3]={0,1,1};
    queue<tuple<int, int, int>> q;
    q.push({1,0,0});
    while(!q.empty()){
        auto[x,y,d]=q.front();
        q.pop();
        for(int i=0;i<3;i++){
            if(abs(i-d)==2)
                continue;
            // 이동 가능한지 체크하고 큐에 넣기
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx==n||ny==n) // 벽임
                continue;
            if(house[ny][nx]==1) // 벽
                continue;
            if(i==1){ // 대각선 이동, 오른쪽과 아래 벽 확인
                if(house[ny][x]==1||house[y][nx]==1)
                    continue;
            }
            if(nx==n-1&&ny==n-1){ // 도착 체크
                ans++;
                continue;
            }
            q.push({nx,ny,i});
        }
    }
    cout<<ans;
}