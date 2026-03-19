#include <iostream>
#include <cctype>
using namespace std;

int main(){
    bool isCheck=false;
    int ans;
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        if(isdigit(s[0])&&!isCheck){
            ans=stoi(s)+3-i;
            isCheck=true;
        }
    }
    if(ans%3==0&&ans%5==0)
        cout<<"FizzBuzz";
    else if(ans%3==0)
        cout<<"Fizz";
    else if(ans%5==0)
        cout<<"Buzz";
    else
        cout<<ans;
    return 0;
}