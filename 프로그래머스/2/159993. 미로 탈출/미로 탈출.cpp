#include <string>
#include <vector>
#include <tuple>
#include <queue>
using namespace std;

int solution(vector<string> maps) {
    int answer = -1;
    //시작찾고
    vector<string> vst=maps;
    queue<tuple<int,int,int>>que;
    for(int i=0;i<maps.size();i++){
        bool ok=false;
        for(int j=0;j<maps[0].size();j++){
            if(maps[i][j]=='S'){
                que.push({i,j,0});
                vst[i][j]='X';
                ok=true;
                break;
            }
        }
        if(ok) break;
    }
    //레버찾고
    vector<int>dy={0,1,0,-1};
    vector<int>dx={1,0,-1,0};
    tuple<int,int,int>lever={-1,-1,-1};
    while(!que.empty()){
        auto [y,x,w]=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int ny=y+dy[i];
            int nx=x+dx[i];
            //범위체크
            if(ny<0||ny>=maps.size()||nx<0||nx>=maps[0].size())
                continue;
            //레버체크
            if(maps[ny][nx]=='L'){
                lever={ny,nx,w+1};
                que={};
                break;
            }
            //갈수있는지
            if(vst[ny][nx]!='X'){
                que.push({ny,nx,w+1});
                vst[ny][nx]='X';
            }
        }
    }
    if(get<0>(lever)==-1)
        return answer;
    //방문리셋
    vst=maps;
    que.push(lever);
    vst[get<0>(lever)][get<1>(lever)]='X';
    //출구찾기
    while(!que.empty()){
        auto [y,x,w]=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int ny=y+dy[i];
            int nx=x+dx[i];
            //범위체크
            if(ny<0||ny>=maps.size()||nx<0||nx>=maps[0].size())
                continue;
            //레버체크
            if(maps[ny][nx]=='E'){
                answer=w+1;
                que={};
                break;
            }
            //갈수있는지
            if(vst[ny][nx]!='X'){
                que.push({ny,nx,w+1});
                vst[ny][nx]='X';
            }
        }
    }
    return answer;
}