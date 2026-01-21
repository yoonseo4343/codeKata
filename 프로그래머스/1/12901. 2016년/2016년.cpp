#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> dow={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> month={0,3,4,0,2,5,0,3,6,1,4,6};
    return dow[(b+month[a-1])%7];
}