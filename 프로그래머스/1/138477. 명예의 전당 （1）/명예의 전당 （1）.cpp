#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a,int b){
    return a>b;
}
vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> good;
    int minScore=score[0];
    for(int n:score){
        if(answer.size()<k){
            good.push_back(n);
            if(minScore>n)
                minScore=n;
        }
        else{
            if(n>minScore){
                good.push_back(n);
                sort(good.begin(),good.end(),comp);
                minScore=good[k-1];
            }
            
        }
        answer.push_back(minScore);
    }
    return answer;
}