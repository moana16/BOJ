#include<bits/stdc++.h>
using namespace std;

int N,M, ans = 0;

bool comb[202][202];

int main() {
    cin>>N>>M;
    memset(comb, false, sizeof(comb));
    for(int i=0; i<M; i++) {
        int a,b; cin>>a>>b;
        comb[a][b] = true;
        comb[b][a] = true;
    }

    
    vector<int> v(N);
    fill(v.begin(), v.end(), 1);
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;

    do {
        vector<int> tmp;
        for(int i=0; i<N; i++) {
            if(v[i] == 0) tmp.push_back(i+1);
        }

        if(!comb[tmp[0]][tmp[1]] && !comb[tmp[0]][tmp[2]] && !comb[tmp[1]][tmp[2]]) ans++;
    }
    while(next_permutation(v.begin(), v.end()));
    

    cout<<ans;


}