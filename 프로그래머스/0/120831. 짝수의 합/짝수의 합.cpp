#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n%2==1)//홀수
        n--;
    return ((1+n)*(n/2)-n/2)/2+n/2;

}