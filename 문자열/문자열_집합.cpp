#include<bits/stdc++.h>
using namespace std;

int N,M,ans = 0;
set<string> v;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string str; cin>>str;
        v.insert(str);
    }

    for(int i=0; i<M; i++) {
        string str; cin>>str;
        if(v.find(str) != v.end()) ans++;
    }
    cout<<ans;
}