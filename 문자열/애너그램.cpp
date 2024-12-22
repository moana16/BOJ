#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string a,b; cin>>a>>b;
        cout<<a<<" & "<<b<<" ";
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a == b) cout<<"are anagrams.\n";
        else cout<<"are NOT anagrams.\n";
    }
}