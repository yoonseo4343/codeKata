#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<11;i++){
        bool isFind=false;
        for(int j=1;j<11;j++){
            if(a*i+b*j==c){
                if(isFind)
                    cout<<" ";
                cout<<j;
                isFind=true;
            }
        }
        if(!isFind)
            cout<<0;
        cout<<"\n";
    }
    
}