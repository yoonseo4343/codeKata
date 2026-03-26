#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> dp;
    for(int i=1;i<=n;i++){
        // 제곱수 체크
        int d=int(sqrt(i));
        if(i==pow(d,2))
        {
            dp.push_back(1);
        }
        else{
            int ans=4;
            while(d>=1){
                int tmp=pow(d,2);
                if(ans>dp[i-tmp-1]+dp[tmp-1]){
                    ans=dp[i-tmp-1]+dp[tmp-1];
                }
                d--;
            }
            dp.push_back(ans);
        }
           
    }
    cout<<dp[n-1];
    return 0;
}