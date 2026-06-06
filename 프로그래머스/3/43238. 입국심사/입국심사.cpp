#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long left=0;
    long long mid=0;
    long long right=(long long)(*max_element(times.begin(),times.end()))*n;
    while(left<right){
        mid=(left+right)/2;
        answer=0;
        for(auto t:times){
            answer+=mid/t;
        }
        if(answer<n){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return right;
}