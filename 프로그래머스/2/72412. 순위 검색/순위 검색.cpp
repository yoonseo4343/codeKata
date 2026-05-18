#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;
map<string,vector<int>> maps;
void dfs(vector<string>& temps,int dep,string cur){
    if(dep==4){
        maps[cur].push_back(stoi(temps[4]));
        return;
    }
    dfs(temps,dep+1,cur+temps[dep]);
    dfs(temps,dep+1,cur+"-");
}
vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer;
    for(auto it:info){
        stringstream ss(it);
        vector <string> temps;
        string temp;
        while(ss>>temp){
            temps.push_back(temp);
        }
        dfs(temps,0,"");
    }
    // 정보 정렬
    for(auto& it:maps){
        sort(it.second.begin(),it.second.end());
    }
    for(auto q:query){
        stringstream ss(q);
        string qs="";
        string temp;
        int num;
        while(ss>>temp){
            if(temp=="and")
                continue;
            if(isdigit(temp[0])){
                num=stoi(temp);
                continue;
            }
            qs+=temp;
        }
        int idx=lower_bound(maps[qs].begin(),maps[qs].end(),num)-maps[qs].begin();
        answer.push_back(maps[qs].size()-idx);
    }
    
    return answer;
}