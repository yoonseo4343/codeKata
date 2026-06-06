#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    int h=0;
    int t=people.size()-1;
    while(h<=t){
        if(h==t){
            answer++;
            break;
        }
        if(people[h]+people[t]<=limit){
            answer++;
            h++;
            t--;
        }
        else{
            t--;
            answer++;
        }
    }
    return answer;
}