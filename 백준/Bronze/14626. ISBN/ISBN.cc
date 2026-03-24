#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int ans,p,t=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*')
            p=i; // 훼손 위치
        else if(i%2==1)
            t+=(int(s[i])-48)*3;
        else
            t+=(int(s[i])-48);
    }
    
    ans=10-(t%10);
    
    if(p%2==1)
        cout<<ans*7%10;
    else
        cout<<ans;
    return 0;
}