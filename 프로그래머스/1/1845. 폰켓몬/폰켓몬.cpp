#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = nums.size()/2;
    set<int> sets;
    for(int i:nums){
        sets.insert(i);
    }
    if(sets.size()<answer)
        return sets.size();
    return answer;
}