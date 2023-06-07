#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;

int main() {
    int n; cin>>n;
    while(n--) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++) {
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
}