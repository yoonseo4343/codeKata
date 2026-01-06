#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    //제곱수 빼기
    for(int i=left;i<=right;i++){
        int temp=sqrt(i);
        if(i==pow(temp,2)){
            answer-=i;
        }else{
            answer+=i;
        }
    }
    return answer;
}