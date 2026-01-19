#include <string>
#include <vector>

using namespace std;
int cokeReturn(int &a, int &b, int &n){
    int temp=(n/a)*b;
    n=temp+n%a;
    return temp;
}
int solution(int a, int b, int n) {
    int answer = 0;
    while(n>=a){
        answer+=cokeReturn(a,b,n);
    }
    return answer;
}