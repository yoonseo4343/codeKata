#include <string>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<tuple<int,int>> que;
    que.push({0,0});
    while(!que.empty()){
        auto [a,b]=que.front(); //값,순서
        que.pop();
        if(b==numbers.size()){
            if(a==target){
                answer++;
            }
        }
        else{
            //양
            que.push({a+numbers[b],b+1});
            //음
            que.push({a-numbers[b],b+1});
            
        }
    }
    return answer;
}