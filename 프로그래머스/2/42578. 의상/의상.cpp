#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string,int> clt;
    for(vector<string> vec:clothes){
        if(clt[vec[1]]){
            clt[vec[1]]+=1;
        }else{
            clt[vec[1]]=1;
        }
    }
    for(const auto& pair:clt){
        answer*=(pair.second+1);
    }
    return answer-1;
}