#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    sort(lottos.begin(),lottos.end());
    sort(win_nums.begin(),win_nums.end());
    int i=0;
    int unkn=0;
    int same=0;
    for(int n:lottos){
        if(i==6)
            break;
        if(n==0){
            unkn++;
            continue;
        }
        while(n>win_nums[i]&&i<5){
            i++;
        }
        if(n==win_nums[i]){
            same++;
            i++;
        }
        
    }
    same+unkn==0?answer.push_back(6):answer.push_back(7-(same+unkn));
    same==0?answer.push_back(6):answer.push_back(7-(same));
    
    return answer;
}