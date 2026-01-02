#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int small=arr[0];
    int idx=0;
    for (int i =1 ;i<arr.size();i++){
        if(arr[i]<small){
            small=arr[i];
            idx=i;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(i!=idx){
            answer.push_back(arr[i]);
        }
    }
    if(answer.size()==0){
        answer.push_back(-1);
    }
    return answer;
}