#include <iostream>
#include <vector>
using namespace std;
void func(int cnt, vector<char>* invec){
    if(cnt==0){
        for(char it:*invec){
            cout<<it;
        }
        return;
    }
    vector<char> temp=*invec;
    for(int i=0;i<invec->size();i++){
        temp.push_back(' ');
    }
    temp.insert(temp.end(),invec->begin(),invec->end());
    func(cnt-1,&temp);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(1){
        cin>>n;
        vector<char>vec={'-'};
        if(cin.eof()==true)
            break;
        func(n,&vec);
        cout<<"\n";
    }
    return 0;
}