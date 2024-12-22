#include<bits/stdc++.h>
using namespace std;

string sol(const string& str) {
    int n = str.size();

    for(int i=1; i<=n; i++) {
        if(n % i == 0) {
            string unit = str.substr(0,i);
            string tmp = "";

            for(int j=0; j<n/i; j++) tmp += unit;
            if(tmp == str) return unit;

        }
    }
    return str;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string s,t; cin>>s>>t;

    string min_s = sol(s);
    string min_t = sol(t);

    if(min_s == min_t) cout<<1;
    else cout<<0;
}