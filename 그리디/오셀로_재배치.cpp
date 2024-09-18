#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) {
        int N; cin>>N;
        string str, goal; cin>>str>>goal;
        int diff_w = 0, diff_b = 0;
        for(auto i = 0; i<N; i++) {
            if(str[i] != goal[i]) {
                if(str[i] == 'W') diff_w++;
                else if(str[i] == 'B') diff_b++;
            }
        }

        if(diff_w == diff_b) cout<<diff_w<<'\n';
        else cout<<max(diff_w, diff_b)<<'\n';
    }
}