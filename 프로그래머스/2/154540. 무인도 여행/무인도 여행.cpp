#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    for(int i=0;i<maps.size();i++){
        for(int j=0;j<maps[i].size();j++){
            if(maps[i][j]!='X'){
                // 섬 발견 탐색 시작
                queue<tuple<int,int>> que;
                int ans=int(maps[i][j]-48);
                que.push({i,j});//y,x
                maps[i][j]='X';
                int dx[4]={1,0,-1,0};
                int dy[4]={0,1,0,-1};
                
                while(!que.empty()){
                    auto[y,x]=que.front();
                    que.pop();
                    for(int k=0;k<4;k++){
                        int nx=x+dx[k];
                        int ny=y+dy[k];
                        //범위 밖
                        if(nx<0||nx>=maps[i].size()||ny<0||ny>=maps.size())
                            continue;
                        //X인지
                        if(maps[ny][nx]=='X')
                            continue;
                        //카운트
                        ans+=int(maps[ny][nx]-48);
                        maps[ny][nx]='X';
                        que.push({ny,nx});
                    }
                }
                answer.push_back(ans);
            }
        }
    }
    if(answer.empty())
        return {-1};
    sort(answer.begin(),answer.end());
    return answer;
}