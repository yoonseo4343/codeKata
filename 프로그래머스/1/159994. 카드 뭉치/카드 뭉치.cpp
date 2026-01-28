#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i=0;
    int j=0;
    for(string str:goal){
        if(str==cards1[i]){
            i++;
        }
        else if(str==cards2[j]){
            j++;
        }
        else
            return "No";
    }
    return "Yes";
}