#include<bits/stdc++.h>
using namespace std;

int s[22][22];
int mn = 0x7f7f7f;

int main() {
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin>>s[i][j];
    }

    vector<int> team(N);
    fill(team.begin() + N/2, team.end(),1);
    do {
        int tmp = 0;
        for(int i=0; i<N; i++) {
            for(int j=i+1; j<N; j++) {
                if(team[i] != team[j]) continue;
                if(team[i] == 0) tmp += (s[i][j] +s[j][i] );
                else tmp -= (s[i][j] + s[j][i]);
            }
        }
        mn = min(mn, abs(tmp));
    }
    while (next_permutation(team.begin(),team.end()));

    cout<<mn;

}