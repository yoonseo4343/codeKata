#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int sz=citations.size();
    sort(citations.begin(),citations.end());
    for(int i=0;i<sz;i++){
        if(citations[i]>=sz-i)
            answer++;
    }
    return answer;
}