#include<bits/stdc++.h>
using namespace std;

int N,M;
vector<int> v;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int s,e;
    while(M--) {
        
        cin>>s>>e;

        cout<<upper_bound(v.begin(), v.end(),e) - lower_bound(v.begin(),v.end(),s)<<'\n';

    }
}