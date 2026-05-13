#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x;
    int xn=0;
    int n=0;
    for(char it:s){
        if(xn==0){ // 시작
            x=it;
            xn++;
        }
        else if(x==it){
            xn++;
        }
        else{
            n++;
        }
        //분해
        if(xn==n){
            answer++;
            xn=0;
            n=0;
        }
    }
    if(xn!=0){
        answer++;
    }
    return answer;
}