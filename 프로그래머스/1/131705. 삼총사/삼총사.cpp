#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int size=number.size();
    for(int i=0;i<size-2;i++){
        int a=number[i];
        for(int j=i+1;j<size-1;j++){
            int b=number[j];
            for(int k=j+1;k<size;k++){
                int c=number[k];
                if(a+b+c==0)
                    answer++;
            }
        }
    }
    return answer;
}