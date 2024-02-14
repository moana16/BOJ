#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string s; cin>>s;
    string bomb; cin>>bomb;

    string res;
    
    for(auto c : s) {
        res.push_back(c);

        if(res.size() >= bomb.size() && res.substr(res.size()-bomb.size()) == bomb) {
            res.erase(res.size()-bomb.size());
        }

    }

    if(res.empty()) cout<<"FRULA";
    else cout<<res;
}