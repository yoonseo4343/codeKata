#include <string>
#include <vector>
#include <cctype>
using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string>en={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            answer*=10;
            answer+=(s[i]-'0');
        }
        else{
            for(int j=0;j<10;j++){
                if(i==s.find(en[j],i)){
                    answer*=10;
                    answer+=j;
                    i+=en[j].size()-1;
                    break;
                }
            }
        }
    }
    return answer;
}