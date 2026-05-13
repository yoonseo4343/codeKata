#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(auto it:targets){
        int ans=0;
        for(char c:it){
            int min=101;
            for (auto key:keymap){
                int idx=key.find(c);
                if(idx==string::npos){
                    continue;    
                }
                
                else if(idx==0){
                    min=0;
                    break;
                }
                else if(idx<min)
                    min=idx;
            }
            if(min==101){
                ans=-1;
                break;
            }
            ans+=min+1;
        }
        
        answer.push_back(ans);
    }
    return answer;
}