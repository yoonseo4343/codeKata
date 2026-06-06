#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> sortp=priorities;
    sort(sortp.begin(),sortp.end());
    int p=0;
    int t=sortp.size()-1;
    while(1){
        if(p==sortp.size())
            p=0;
        if(priorities[p]==sortp[t]){
            //젤큰수 찾음
            answer++;
            t--;
            priorities[p]=-1;
            if(p==location)
                break;
        }
        p++;
    }
    return answer;
}