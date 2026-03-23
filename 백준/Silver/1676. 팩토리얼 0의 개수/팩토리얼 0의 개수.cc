#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int five=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int t=i;
        while(t%5==0){
            five++;
            t/=5;
        }
    }
    cout<<five;
    return 0;
}