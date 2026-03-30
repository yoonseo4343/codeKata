#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<string> space;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        space.push_back(s);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(space[i][j]=='I'){
                // 로직
                space[i][j]='X';
                int dx[4]={1,0,-1,0};
                int dy[4]={0,1,0,-1};
                queue<tuple<int,int>> que;
                que.push({i,j});//y,x
                while(!que.empty()){
                    auto[y,x]=que.front();
                    que.pop();
                    for(int k=0;k<4;k++){
                        int nx=x+dx[k];
                        int ny=y+dy[k];
                        //범위밖
                        if(nx>=m||nx<0||ny<0||ny>=n)
                            continue;
                        //X체크
                        if(space[ny][nx]=='X')
                            continue;
                        //사람체크
                        if(space[ny][nx]=='P'){
                            ans++;
                        }
                        //큐 넣기
                        que.push({ny,nx});
                        space[ny][nx]='X';
                    }
                }
                break;
            }
        }
    }
    if(ans==0)
        cout<<"TT";
    else
        cout<<ans;
    return 0;
}