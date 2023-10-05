#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int,string>& a, const pair<int,string>&b) {
    return a.first< b.first;
}

int main() {
    int n; cin>>n;
    vector<pair<int,string>> v;
    while(n--) {
        int n; string s;
        cin>>n>>s;
        v.push_back({n,s});

    }
    stable_sort(v.begin(),v.end(),compare);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
}