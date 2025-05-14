#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int n; string s;
        cin>>n>>s;
        string ans;
        for(auto c : s) {
            for(int i=0; i<n; i++) ans += c;
        }
        cout<<ans<<'\n';
    }
}