#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> values;
multiset<int> bags;

int main() {
    int N,K; cin>>N>>K;
    for(int i=0; i<N; i++) {
        int m,v; cin>>m>>v;
        values.push_back(make_pair(v,m));
    }
    for(int i=0; i<K; i++) {
        int x; cin>>x;
        bags.insert(x);
    }

    sort(values.begin(), values.end());

    long long ans = 0;

    for(int i=N-1; i>=0; i--) {
        auto it = bags.lower_bound(values[i].second);
        if(it == bags.end()) continue;

        ans += values[i].first;
        bags.erase(it);
        
    }
    cout<<ans;


}