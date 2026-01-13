#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            j=0;
            answer.push_back(' ');
        }
        else{
            if(j%2==0){
                answer.push_back(toupper(s[i]));
            }
            else{
                answer.push_back(tolower(s[i]));
            }
            j++;
        }
    }
    return answer;
}