#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector <int> vec;
    while(n>0){
        vec.push_back(n%10);
        n/=10;
    }
    sort(vec.begin(),vec.end());
    int i=1;
    for(int& v:vec){
        answer+=v*i;
        i*=10;
    }
    return answer;
}