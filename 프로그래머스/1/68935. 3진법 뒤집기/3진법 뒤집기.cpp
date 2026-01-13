#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector <int> tern;
    while(n!=0)
    {
        tern.push_back(n%3);
        n/=3;
    }
    int size=tern.size();
    for (int i=0;i<size;i++){
        answer+=tern[size-1-i]*pow(3,i);
    }
    return answer;
}