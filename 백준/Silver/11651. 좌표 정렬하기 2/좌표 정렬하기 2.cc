#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comp(vector<int> &v1, vector<int> &v2){
    if(v1[1] == v2[1])
        return v1[0]<v2[0];
    else return v1[1]<v2[1];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end(),comp);
    for(auto it:vec){
        cout<<it[0]<<" "<<it[1]<<"\n";
    }
}