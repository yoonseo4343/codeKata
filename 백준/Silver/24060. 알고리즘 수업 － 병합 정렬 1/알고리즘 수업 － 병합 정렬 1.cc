#include <iostream>

using namespace std;
int cnt=0;
void merging(int* a, int p, int q, int r){
    int i=p;
    int j=q+1;
    int t=0;
    int tmp[r+1];
    while(i<=q && j<=r){
        if(a[i]<a[j]){
            tmp[t++]=a[i++];
        }
        else{
            tmp[t++]=a[j++];
        }
    }
    while(i<=q){
        tmp[t++]=a[i++];
    }
    while(j<=r){
        tmp[t++]=a[j++];
    }
    int t2=0;
    for(int i=p;i<=r;i++){
        cnt--;
        if(cnt==0){
            cout<<tmp[t2];
        }
        a[i]=tmp[t2++];
    }
}
void merge_sort(int* a,int p,int r){
    if(p==r) return;
    int q=(p+r)/2;
    merge_sort(a,p,q);
    merge_sort(a,q+1,r);
    merging(a,p,q,r);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    int n;
    cin>>n>>k;
    int arr[n+1];
    cnt=k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    if(cnt>0)
        cout<<-1;
    return 0;
}