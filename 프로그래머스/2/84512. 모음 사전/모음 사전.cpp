#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector <string> alpa={"A","E","I","O","U"};
vector <string> ans={};
void dfs(int len,string s){
    ans.push_back(s);
    if(len==5){
        return;
    }
    for(auto& it:alpa){
        dfs(len+1,s+it);
    }
}
int solution(string word) {
    int answer = 0;
    dfs(0,"");
    auto tmp=find(ans.begin(),ans.end(),word);
    answer=distance(ans.begin(),tmp);
    return answer;
}