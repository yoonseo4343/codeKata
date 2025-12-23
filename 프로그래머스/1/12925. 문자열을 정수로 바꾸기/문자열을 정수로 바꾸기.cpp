#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int n=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='-')
            answer*=-1;
        else if (s[i]=='+')
            continue;
        else
            answer+=(s[i]-'0')*n;
        n*=10;
    }
    return answer;
}