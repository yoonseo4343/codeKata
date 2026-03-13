#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> floor;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        floor.push_back(s);
    }
    vector<vector<int>>visited(n,vector<int>(m,0)); 
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visited[i][j]==1)
                continue;
            visited[i][j]=1; // 방문체크
            cnt++;
            int tmp=1;
            if(floor[i][j]=='-'){
                while(j+tmp<m){
                    if(floor[i][j+tmp]=='-'){
                        visited[i][j+tmp]=1; // 방문체크
                        tmp++;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                while(i+tmp<n){
                    if(floor[i+tmp][j]=='|'){
                        visited[i+tmp][j]=1; // 방문체크
                        tmp++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}