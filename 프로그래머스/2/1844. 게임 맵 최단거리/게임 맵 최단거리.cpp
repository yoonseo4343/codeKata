#include<vector>
#include<queue>
#include<tuple>

using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    int m=maps.size();
    int n=maps[0].size();
    queue<tuple<int,int,int>> que;
    que.push({0,0,1});
    while(!que.empty()){
        bool goal=false;
        auto[x,y,w]=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            //도착체크
            if(nx==n-1&&ny==m-1){
                answer=w+1;
                goal=true;
                break;
            }
            //범위체크
            if(nx<0||nx>=n||ny<0||ny>=m)
                continue;
            //벽체크
            if(maps[ny][nx]==0)
                continue;
            que.push({nx,ny,w+1});
            maps[ny][nx]=0;
        }
        if(goal)
            break;
    }
    return answer;
}