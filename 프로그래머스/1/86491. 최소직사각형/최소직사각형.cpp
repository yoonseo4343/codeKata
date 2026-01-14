#include <string>
#include <vector>

using namespace std;
int solution(vector<vector<int>> sizes) {
    int maxA=0;
    int maxB=0;
    for(vector <int> vec:sizes){
        if (vec[0]>vec[1]){
            if(maxA<vec[0])
                maxA=vec[0];
            if(maxB<vec[1])
                maxB=vec[1];
        }
        else{
            if(maxA<vec[1])
                maxA=vec[1];
            if(maxB<vec[0])
                maxB=vec[0];
        }
    }
    return maxA*maxB;
}