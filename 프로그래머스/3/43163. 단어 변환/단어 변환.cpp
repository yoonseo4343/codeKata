#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    if(words.end()==find(words.begin(),words.end(),target))
        return 0;
    queue<tuple<string,int>> que;
    que.push({begin,0});
    vector<int>visit(words.size(),0);
    while(!que.empty())
    {
        auto [c,w]=que.front();
        que.pop();
        for(int i=0;i<words.size();i++){
            //이미방문 건뛰
            if(visit[i]==1)
                continue;

            //한글자 빼고 같은지 검사
            bool one=true;
            int cnt=0;
            for(int j=0;j<c.size();j++){
                if(c[j]!=words[i][j]){
                    cnt++;
                }
                if(cnt>1){
                    one=false;
                    break;
                }
            }
            if(one){
                            //타겟 검사
            if(words[i]==target){
                answer=w+1;
                que={};
                break;
            }
                que.push({words[i],w+1});
                visit[i]=1;
            }
        }
        
    }
    return answer;
}