#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string stk="";
    for(int n:ingredient){
        stk+=n+'0';

        if(stk.find("1231",stk.size()-4,4)!=string::npos){
            answer+=1;
            stk=stk.substr(0,stk.size()-4);
        }
    }
    return answer;
}