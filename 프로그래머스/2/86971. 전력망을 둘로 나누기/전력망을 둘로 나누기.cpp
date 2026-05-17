#include <string>
#include <vector>

using namespace std;
int dfs(int a,int b,vector<vector<int>>& graph,vector<int>& visit,int cur){
    //제외한 값,
    visit[cur]=1;
    int cnt=1;
    for(int it:graph[cur]){
        if(visit[it]==1) //방문했으면 건뛰
            continue;
        //끊은거면 건뛰
        if(it==a||it==b)
            continue;
        cnt+=dfs(a,b,graph,visit,it);
    }
    return cnt;
}
int solution(int n, vector<vector<int>> wires) {
    int answer = n;
    vector<vector<int>>graph(n+1);
    for(auto it:wires){
        graph[it[0]].push_back(it[1]);
        graph[it[1]].push_back(it[0]);
    }
    //하나씩 제외
    for(int i=0;i<n-1;i++){
        vector<int>visit(n+1,0);
        int cnt=dfs(wires[i][0],wires[i][1],graph,visit,1);
        if(answer>abs(cnt+cnt-n)){
            answer=abs(cnt+cnt-n);
        }
    }
    return answer;
}