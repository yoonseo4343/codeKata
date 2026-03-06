#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<int,int> m;
    int n;
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        m[a]++;
    }
    for(const auto& pair:m){
        for(int i=0;i<pair.second;i++){
            cout<<pair.first<<"\n";
        }
    }
    return 0;
}