#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int cnt=1;
    int ans=666;
    while(cnt!=n){
        ans+=1;
        if(to_string(ans).find("666")!=string::npos)
            cnt++;
    }
    cout<<ans;
    return 0;
}