#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int a=((4+brown)+sqrt(pow(4+brown,2)-8*(2*brown+2*yellow)))/4;
    int b=(yellow+brown)/a;
    a>b?answer={a,b}:answer={b,a};
    return answer;
}