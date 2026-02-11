#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
bool comp(int a,int b){
    return a>b;
}
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    set <int> sizes;
    for(int n:tangerine){
        sizes.insert(n);
    }
    vector<int> srt;
    for(int n:sizes){
        int cnt=count(tangerine.begin(),tangerine.end(),n);
        srt.push_back(cnt);
    }
    sort(srt.begin(),srt.end(),comp);
    for(int i=0;k>0;i++){
        k-=srt[i];
        answer++;
    }
    return answer;
}