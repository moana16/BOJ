#include<bits/stdc++.h>
using namespace std;

int N,M;
int pref[33][33];
int ans = 0;

void sol(vector<int> chickens) {

    if(chickens.size() == 3) {
        int total = 0;
        for(int j=0; j<N; j++) {
            int mx = 0;
            for(int i=0; i<3; i++) {
                mx = max(mx, pref[j][chickens[i]]);
            }
            total += mx;   
        }
        
        ans = max(ans, total);
        return;
    }
    for(int i=0; i<M; i++) {
        if(chickens.empty() || (find(chickens.begin(), chickens.end(), i) == chickens.end())) {
            vector<int> tmp(chickens.begin(), chickens.end());
            tmp.push_back(i);
            sol(tmp);
        }
    }

}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>pref[i][j];
        }
    }

    vector<int> chickens;
    sol(chickens);
    cout<<ans;



}