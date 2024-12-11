#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(const string& S, const string& T ) {
    int i=0, j=0;
    while(i < S.length() && j < T.length()) {
        if(S[i] == T[j]) {
            i++;
        }
        j++;
    }
    return i == S.length();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    string s,t;
    while(cin>>s>>t) {
        if(isSubsequence(s,t)) cout<<"Yes\n";
        else cout<<"No\n";
    }
}