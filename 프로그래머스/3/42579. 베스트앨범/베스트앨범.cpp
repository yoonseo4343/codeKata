#include <string>
#include <vector>
#include <map>
#include <tuple>
#include <algorithm>

using namespace std;
bool comp(const pair<string,int> a, pair<string,int>b){
    return a.second>b.second;
}
bool cmp(const pair<int,int>a, const pair<int,int>b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,vector<pair<int,int>>>maps;//장르 :플레이수,번호
    map<string,int>srt;//장르 토탈수
    for(int i=0;i<genres.size();i++){
        maps[genres[i]].push_back({plays[i],i});
        srt[genres[i]]+=plays[i];
    }
    vector<pair<string,int>> vec(srt.begin(),srt.end());
    sort(vec.begin(),vec.end(),comp);
    for(auto it:vec){
        vector<pair<int,int>> temp=maps[it.first];
        if(temp.size()==1){
            answer.push_back(temp[0].second);
            continue;
        }
        sort(temp.begin(),temp.end(),cmp);
        answer.push_back(temp[0].second);
        answer.push_back(temp[1].second);
        
        
    }
    return answer;
}