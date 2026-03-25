#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    vector<long long> dp={1,1,1,2,2};
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n>dp.size()){
            for(int j=dp.size();j<n;j++){
                dp.push_back(dp[j-1]+dp[j-5]);
            }
        }
        cout<<dp[n-1]<<"\n";
        
    }
    return 0;
}