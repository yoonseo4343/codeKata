#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> pos={"aya","ye","woo","ma"};
    for(auto it:babbling){
        int before=-1; // 연속인지 체크
        int idx=0;
        int itSize=it.size();
        for(int i=0;i<4;i++){
            if(i==before)
                continue;
            int index=it.find(pos[i],idx);
            if(index!=string::npos){
                if(index!=idx)
                    continue;
                idx=index+pos[i].size();
                // 찾음
                if(idx==itSize){
                    answer++;
                    break;
                }
                // 맞음
                else{
                    before=i;
                    i=-1;
                }
                
            }
        }
    }
    return answer;
}