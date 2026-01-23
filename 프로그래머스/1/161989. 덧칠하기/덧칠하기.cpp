#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int touch=0;
    for(int n:section){
        if(n>touch){
            answer++;
            touch=n+m-1;
        }
    }
    return answer;
}