#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
bool func(vector<string>& ans,string st,vector<vector<string>>& tickets,vector<int>& vst){
    ans.push_back(st);
    if(vst.end()==find(vst.begin(),vst.end(),0))
        return true;
    // st로 출발하는 티켓과 번호를 튜플로 넣고 정렬
    vector<tuple<string,int>>go;
    for(int i=0;i<tickets.size();i++){
        if(tickets[i][0]==st&&vst[i]==0){
            go.push_back({tickets[i][1],i});
        }
    }
    sort(go.begin(),go.end());
    for(auto [next,idx]:go){
        vst[idx]=1;
        if(func(ans,next,tickets,vst))
            return true;
        ans.pop_back();
        vst[idx]=0;
    }
    return false;
}
vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    vector<int> vst(tickets.size(),0);
    func(answer,"ICN",tickets,vst);
    return answer;
}