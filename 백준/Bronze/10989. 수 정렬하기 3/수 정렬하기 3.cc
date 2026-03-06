#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[10001]={0,};
    int n;
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a]++;
    }
    for(int i=1;i<=10000;i++){
        if (arr[i]!=0){
            for(int j=0;j<arr[i];j++){
                cout<<i<<"\n";
            }
        }
    }
    return 0;
}