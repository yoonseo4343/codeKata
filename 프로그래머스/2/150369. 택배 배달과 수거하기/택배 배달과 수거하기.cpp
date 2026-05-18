#include <string>
#include <vector>
using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    while(n>0){
        while(deliveries[n-1]==0&&pickups[n-1]==0){
            n--;
        }
        if(n<1)
            break;
        //가고
        answer+=n;
        int box=cap;
        int idx=n;
        while(box>0&&idx>0){
            idx--;
            box-=deliveries[idx];
            deliveries[idx]=0;
            if(box<0)
                deliveries[idx]=-box;
        }
        //돌아옴
        answer+=n;
        idx=n;
        box=cap;
        while(box>0&&idx>0){
            idx--;
            box-=pickups[idx];
            pickups[idx]=0;
            if(box<0)
                pickups[idx]=-box;
        }
    }
    return answer;
}