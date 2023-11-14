#include<bits/stdc++.h>
using namespace std;

map<string, vector<string>> m;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N,M; cin>>N>>M;
    while (N--)
    {
        string group; cin>>group;
        int x; cin>>x;
        while(x--) {
            string name; cin>>name;
            m[group].push_back(name);
        }
    }
    for(auto &g : m) {
        sort(g.second.begin(),g.second.end());
    }
    while(M--) {
        string str; cin>>str;
        int t; cin>>t;
        if(t == 1) {
            for(auto &pair  : m) {
                if(find(pair.second.begin(),pair.second.end(),str) != pair.second.end()) {
                    cout<<pair.first<<'\n';
                }
            }
        }
        else {
            if (m.find(str) != m.end()) {
                for (auto &name : m[str]) {
                    cout << name << '\n';
                }
            }
        }
    }
    
}