#include <string>
#include <vector>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    int left[1000002];
    int right[1000002];
    int visited[10002];
    int cnt=0;
    for(int i=0;i<topping.size()-1;i++){
        int c=topping[i];
        if(visited[c]==0){
            cnt++;
            visited[c]=1;
        }
        left[i]=cnt;
    }
    cnt=0;
    fill(&visited[0],&visited[10002],0);
    for(int j=topping.size()-1;j>0;j--){
        int c=topping[j];
        if(visited[c]==0){
            cnt++;
            visited[c]=1;
        }
        right[j]=cnt;
    }
    for(int k=0;k<topping.size()-2;k++){
        if(left[k]==right[k+1]){
            answer++;
        }
    }
    return answer;
}