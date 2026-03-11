#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int m=a*b;
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    while(1){
        int r=a%b;
        if(r==0){
            cout<<b<<"\n"<<m/b<<"\n";
            break;
        }
        a=b;
        b=r;
    }
    return 0;
}