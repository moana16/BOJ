#include<bits/stdc++.h>
using namespace std;

int N,M,cnt;
int mat[55][55];
int ans = 0x7f7f7f;;
vector<pair<int,int>> chicken;
vector<pair<int,int>> home;
int main() {
    cin>>N>>M;
    for(int i=1;i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 2) chicken.push_back({i,j});
            else if(mat[i][j] == 1) home.push_back({i,j});
        }
    }
    cnt = chicken.size(); //치킨 집 숫자

    if(cnt == M) {
        ans = 0;
        for(int i=0; i<home.size(); i++) {
            int mn = 0x7f7f7f;
            for(int j=0; j<cnt; j++) {
                int dist = abs(home[i].first-chicken[j].first) + abs(home[i].second-chicken[j].second);
                mn = min(mn,dist);
            }
            ans += mn;  
        }
    }
    else {
        vector<int> tmp(cnt);
        fill(tmp.begin()+M, tmp.end(),1);

        do {
            int min_dist = 0;
            for(int i=0; i<home.size(); i++) {
                int mn = 0x7f7f7f;
                for(int j=0; j<cnt; j++) {
                    if(tmp[j] == 1) continue;
                    int dist = abs(home[i].first-chicken[j].first) + abs(home[i].second-chicken[j].second);
                    mn = min(mn,dist);
                }
                min_dist += mn;
            }
            ans = min(min_dist, ans);
        }
        while(next_permutation(tmp.begin(), tmp.end()));
    }
    cout<<ans;
    
}