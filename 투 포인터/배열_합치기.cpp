#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    vector<int> s;
    while(N--) {
        int x; cin>>x;
        s.push_back(x);
    }

    while(M--) {
        int x; cin>>x;
        s.push_back(x);
    }

    sort(s.begin(), s.end());
    for(auto c : s) cout<<c<<" ";

}