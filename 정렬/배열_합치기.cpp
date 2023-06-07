#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    ios::sync_with_stdio(false); cin.tie(0);
    vector<int> v;
    cin>>n>>m;
    for(int i=0; i<n;i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<m; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}