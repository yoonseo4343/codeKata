#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int psize=p.size()-1;
    for(int i=0;i<t.size()-psize;i++){
        if(t[i]<p[0]){
            answer++;
        }
        else if(t[i]==p[0]){
            bool isSmall=true;
            for(int j=1;j<=psize;j++){
                if(t[i+j]>p[j]){
                    isSmall=false;
                    break;
                }
                else if(t[i+j]<p[j]){
                    break;
                }
            }
            if(isSmall)
            {
                answer++;
            }
        }
    }
    return answer;
}