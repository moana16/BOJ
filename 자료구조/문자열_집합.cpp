#include<bits/stdc++.h>
using namespace std;

int N,M,ans = 0;
map<string, int> m;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string str; cin>>str;
        m[str]++;
    }

    for(int i=0; i<M; i++) {
        string str; cin>>str;
        if(m[str] > 0) ans++;
    }

    cout<<ans;

}