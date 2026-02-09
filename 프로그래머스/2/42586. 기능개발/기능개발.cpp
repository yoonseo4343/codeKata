#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int first=ceil(static_cast<float>(100-progresses[0])/speeds[0]);
    answer.push_back(1);
    for(int i=1;i<speeds.size();i++){
        int temp=ceil(static_cast<float>(100-progresses[i])/speeds[i]);
        if (temp<=first){
            answer[answer.size()-1]++;
        }
        else{
            first=temp;
            answer.push_back(1);
        }
    }
    
    return answer;
}