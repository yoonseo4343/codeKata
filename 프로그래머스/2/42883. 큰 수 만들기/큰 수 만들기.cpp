#include <string>
#include <vector>
#include <stack>
using namespace std;

string solution(string number, int k) {
    string answer = "";
    stack<char> stk;
    for(char it:number){
        while(!stk.empty()&&k>0&&stk.top()<it){
            stk.pop();
            k--;
        }
        stk.push(it);
    }
    for(int i=0;i<k;i++){
        stk.pop();
    }
    while(!stk.empty()){
        answer=stk.top()+answer;
        stk.pop();
    }
    return answer;
}