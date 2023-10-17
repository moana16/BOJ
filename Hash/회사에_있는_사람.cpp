#include <bits/stdc++.h>
using namespace std;

int N;
unordered_set<string> people;

int main() {

    ios::sync_with_stdio(false); cin.tie(0);
    cin >> N;
    
    while(N--) {
        string p, s;
        cin>>p>>s;
        if(s.compare("enter") == 0) people.insert(p);
        else {
            if(people.find(p) != people.end()) people.erase(p);
        }
    }
    vector<string> ans(people.begin(), people.end());
    sort(ans.begin(), ans.end(),greater<string>());
    for(auto c : ans) cout<<c<<'\n';
}