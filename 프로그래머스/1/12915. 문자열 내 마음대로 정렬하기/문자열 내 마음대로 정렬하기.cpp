#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    map<char,vector<string>> temp;
    for(string s:strings){
        temp[s[n]].push_back(s);
    }
    for(auto i=temp.begin();i!=temp.end();i++){
        sort(i->second.begin(),i->second.end());
        for(auto j:i->second)
            answer.push_back(j);
    }
    return answer;
}