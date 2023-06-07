#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;


int main() {
    int n; cin>>n;
    while(n--) {
        int x,y;
        cin>>x>>y;
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++) {
        cout<<v[i].second<<" "<<v[i].first<<'\n';
    }
}