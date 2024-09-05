#include<bits/stdc++.h>
using namespace std;


int main() {
    int N; cin>>N;
    set<string> s;
    map<string, int> m;
    int mx = 0;
    string ans;

    for(int i=0; i<N; i++) {
        string str; cin>>str;
        s.insert(str);
        m[str]++;
    }

    for(auto c : s ) {
        if(m[c] > mx) {
            mx = m[c];
            ans = c;
        } 
    }

    cout<<ans;
}