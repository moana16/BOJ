#include <bits/stdc++.h>
using namespace std;
void sol(string s1, string s2) {
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0; i<s1.length(); i++) {
        if(s1[i] != s2[i]) {
            cout<<"Impossible"<<"\n";
            return;
        }

    }
    cout<<"Possible"<<"\n";
        
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        string s1, s2;
        cin>>s1>>s2;
        sol(s1, s2);
    }
}