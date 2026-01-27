#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    int i=0; // reserve탐색
    vector<int> geted;
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    for(int n:lost){
        bool isGet=false;
        if(count(geted.begin(),geted.end(),n)){
            answer--;
            continue;
        }
        if(count(reserve.begin()+i,reserve.end(),n)){
            i=find(reserve.begin()+i,reserve.end(),n)-reserve.begin();
            i++;
            continue;
        }
        while(i<reserve.size()&&n+1>=reserve[i]){
            if(n-1<=reserve[i] && reserve[i]<=n+1){
                isGet=true;
                geted.push_back(reserve[i]);
                break;
            }else{
                i++;
            }
        }
        if(!isGet){
            answer--;
        }
        else{
            i++;
        }
    }
    return answer;
}