#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<pair<int,int>> v(N);

    for(int i=0; i<N; i++) cin>>v[i].second>>v[i].first;

    sort(v.begin(),v.end(), greater<>());
    int min = v[0].first;

    for(auto c : v) {
        if(min <= c.first) min -= c.second;
        else min = c.first - c.second;
    }

    if(min < 0) cout<<-1;
    else cout<<min;
}