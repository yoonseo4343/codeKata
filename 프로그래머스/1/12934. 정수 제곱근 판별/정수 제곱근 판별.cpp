#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long x = 0;
    x=sqrt(n);
    if(n==pow(x,2))
        return pow(x+1,2);
    return -1;
}