#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int big=0;
    int small=0;
    if(n<m){
        small=n;
        big=m;
    }
    else{
        small=m;
        big=n;
    }
    while(1){
        if(big%small==0)
        {
            answer.push_back(small);
             break;
        }
        else{
            int temp=small;
            small=big%small;
            big=temp;
        }
    }
    answer.push_back(n*m/answer[0]);
    return answer;
}