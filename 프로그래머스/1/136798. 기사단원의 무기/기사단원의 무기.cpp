#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 1;
    for(int i=2;i<=number;i++){
        int temp=0;
        for(int j=1;j<sqrt(i);j++){
            if(i%j==0){
                temp+=2;
            }
        }
        if(pow((int)sqrt(i),2)==i)
            temp++;
        if(temp<=limit)
            answer+=temp;
        else
            answer+=power;
    }
    return answer;
}