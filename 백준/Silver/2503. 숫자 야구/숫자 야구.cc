#include <iostream>
#include <vector>

using namespace std;
bool check(vector<int>* ans,int arr[3]){
    int str=0;
    int ball=0;
    for(int i=0;i<3;i++){
        if((*ans)[0]/100==arr[i]){
            if (i==0)
                str++;
            else
                ball++;
            continue;
        }
        if(((*ans)[0]%100)/10==arr[i]){
            if(i==1)
                str++;
            else
                ball++;
            continue;
        }
        if(((*ans)[0]%10)==arr[i]){
            if(i==2)
                str++;
            else
                ball++;
        }
    }
    if(str==(*ans)[1] && ball==(*ans)[2])
        return true;
    
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int cnt=0;
    cin>>n;
    vector<vector<int>> vec;
    for(int i=0;i<n;i++){
        vector<int> tmp;
        for(int j=0;j<3;j++){
            int t;
            cin>>t;
            tmp.push_back(t);
        }
        vec.push_back(tmp);
    }
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            if(i==j)
                continue;
            for(int k=1;k<10;k++){
                if(i==k||j==k)
                    continue;
                for(int l=0;l<n;l++){
                    int arr[3]={i,j,k};
                    if(!check(&vec[l],arr))
                        break;
                    else
                        if(l==n-1)
                            cnt++;
                }
            }
        }
    }
    cout<<cnt;
}