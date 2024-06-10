#include<bits/stdc++.h>
using namespace std;
int ab[11][11], mx = 0;

void sol(int cur, vector<int>& abs) {

    if(cur == 11) {
        int score = 0;
        for(int i=0; i<11; i++) {
            if(abs[i] == 0) return;
            score += abs[i];
        }
        mx = max(mx, score);
        return;
    }

    for(int i=0; i<11; i++) {
        if(ab[cur][i] != 0 && abs[i] == 0) {
            abs[i] = ab[cur][i];
            sol(cur+1, abs);
            abs[i] = 0;
        }
    }

}
int main() {
    int t; cin>>t;

    while(t--) {
        mx = 0;
        for(int i=0; i<11; i++) {
            for(int j=0; j<11; j++) {
                cin>>ab[i][j];
            }
        }
        vector<int> abs(11,0);
        sol(0, abs);
        cout<<mx<<'\n';
    }
    
}