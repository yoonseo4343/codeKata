#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool comp(int a, int b){
    return a>b;
}
int solution(vector<int> numbers) {
    sort(numbers.begin(),numbers.end(),comp);
    int answer = 0;
    for(int i=0;i<10;i++){
        if(!numbers.empty()){
            if(numbers.back()==i){
                numbers.pop_back();
            }else{
                answer+=i;
            }
        }else{
            answer+=i;
        }
    }
    return answer;
}