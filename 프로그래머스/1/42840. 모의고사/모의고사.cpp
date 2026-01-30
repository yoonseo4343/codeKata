#include <string>
#include <vector>
#include <deque>
using namespace std;
int check(deque<int>& p,int n){
    int front=p.front();
    p.pop_front();
    p.push_back(front);
    if(n==front)
        return 1;
    return 0;
}
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    deque<int> p1={1,2,3,4,5};
    deque<int> p2={2,1,2,3,2,4,2,5};
    deque<int> p3={3,3,1,1,2,2,4,4,5,5};
    vector<int> score={0,0,0};
    for(int n:answers){
        score[0]+=check(p1,n);
        score[1]+=check(p2,n);
        score[2]+=check(p3,n);
    }
    int maxx=0;
    for(int n:score){
        if(n>maxx)
            maxx=n;
    }
    for(int i=0;i<3;i++){
        if(score[i]==maxx)
            answer.push_back(i+1);
    }
    
    
    return answer;
}