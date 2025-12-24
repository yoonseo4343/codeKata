#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int total=0;
    int temp=x;
    while(temp>0){
        total+=temp%10;
        temp/=10;
    }
    if(x%total==0)
        return true;
    else
        return false;
}