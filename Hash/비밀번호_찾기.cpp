#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> m;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N,M;
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string w, p;
        cin>>w>>p;
        m[w] = p;
    }
    for(int i=0; i<M; i++) {
        string w; cin>>w;
        if(m.find(w) != m.end()) cout<<m.find(w)->second<<'\n';
    }
}