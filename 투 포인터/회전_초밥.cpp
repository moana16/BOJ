#include<bits/stdc++.h>
using namespace std;

int N,d,k,c,ans = 0;
vector<int> v;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>d>>k>>c;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    unordered_map<int,int> m;

    for(int i=0; i<k; i++) m[v[i]]++;
    m[c]++;

    int maxTypes = m.size();
    for(int start = 1; start < N; start++) {
        int prev = v[start-1];
        m[prev]--;
        if(m[prev] == 0) m.erase(prev);

        int nxt = v[(start+k-1) % N];
        m[nxt]++;

        maxTypes = max(maxTypes, (int)m.size());
    }

    cout<<maxTypes;

}