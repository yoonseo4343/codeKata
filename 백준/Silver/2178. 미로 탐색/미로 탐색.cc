#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n>> m;
    
    vector<string> space;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        space.push_back(s);
    }
    queue<tuple<int,int,int>> que;
    que.push({0,0,1});//y,x,가중치
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    
    while(!que.empty()){
        auto [y,x,w]=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            //도착인지
            if(nx==m-1&&ny==n-1){
                cout<<w+1;
                return 0;
            }
            // 밖
            if(nx<0||nx>=m||ny<0||ny>=n)
                continue;
            //0인지
            if(space[ny][nx]=='0')
                continue;
            //다음
            que.push({ny,nx,w+1});
            space[ny][nx]='0';
        }
    }
    return 0;
}