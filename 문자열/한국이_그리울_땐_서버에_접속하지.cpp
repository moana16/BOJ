#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    string pattern; cin>>pattern;
    string st, en;
    auto it = pattern.find('*');
    st = pattern.substr(0,it);
    en = pattern.substr(it+1);
    while(N--) {
        string s; cin>>s;
        if(s.size() >= st.size() + en.size() &&s.substr(0,st.size()) == st && s.substr(s.size()-en.size()) == en) cout<<"DA\n";
        else cout<<"NE\n";
        


    }
}