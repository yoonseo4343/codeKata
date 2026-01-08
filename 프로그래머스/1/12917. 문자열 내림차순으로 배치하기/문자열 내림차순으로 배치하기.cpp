#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool comp(int a, int b){
    return b<a;
}
string solution(string s) {
    
    sort(s.begin(),s.end(),comp);
    return s;
}