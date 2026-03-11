#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    float a;
    float b;
    float c;
    cin>>a>>b>>c;
    for(int i=1;i<11;i++){
        if(b==0){
            if(i==c/a){
                cout<<"1 2 3 4 5 6 7 8 9 10"<<"\n";
                continue;
            }
            else{
                cout<<0<<"\n";
                continue;
            }
        }
        float tmp=(c-a*i)/b;
        bool isFind=false;
        for(int j=1;j<11;j++){
            if(j==tmp){
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