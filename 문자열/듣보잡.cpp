#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;

    map<string,int> mp;

    for(int i=0; i<N+M; i++) {
        string str; cin>>str;
        mp[str]++;
    }

    vector<string> ans;
    for(auto m : mp) {
        if(m.second == 2) ans.push_back(m.first);
    }

    cout<<ans.size()<<'\n';
    for(auto a : ans) cout<<a<<'\n';
}