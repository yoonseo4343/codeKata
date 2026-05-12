#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(char a,char b){
    return a>b;
}
string solution(string X, string Y) {
    string answer = "";
    // 내림차순 정렬
    sort(X.begin(),X.end(),comp);
    sort(Y.begin(),Y.end(),comp);
    int a=0,b=0;
    while(a<X.size()&&b<Y.size()){
        if(X[a]==Y[b]){
            answer.push_back(X[a]);
            a++;
            b++;
        }
        else if(X[a]>Y[b]){
            a++;
        }
        else{
            b++;
        }
    }
    if(answer=="")
        answer="-1";
    if(answer[0]=='0')
        answer="0";
    return answer;
}