#include<bits/stdc++.h>
using namespace std;

int main() {
    bool checked[31] = {false, };

    for(int i=0; i<28; i++) {
        int x; cin>>x;
        checked[x] = true;
    }

    vector<int> ans;

    for(int i=1; i<=30; i++) {
        if(!checked[i]) ans.push_back(i);
    }

    for(auto a : ans) cout<<a<<'\n';
}