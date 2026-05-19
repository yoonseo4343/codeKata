#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int>goal;
    for(auto it:participant){
        goal[it]+=1;
    }
    for(auto it:completion){
        goal[it]-=1;
        
    }
    for(auto it:goal){
        if(it.second==1){
            answer=it.first;
            break;
        }
    }
    return answer;
}