#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c:s){
        if(c==' '){
            answer.push_back(' ');
        }
        else if(c+n>'z'){
            answer.push_back(char(c+n-'z'+'a'-1));
        }
        else if(c+n>'Z'&&c<'a'){
            answer.push_back(char(c+n-'Z'+'A'-1));
        }
        else
            answer.push_back(char(c+n));
    }
    return answer;
}