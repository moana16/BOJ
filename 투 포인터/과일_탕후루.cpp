#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N);
    map<int,int> mp;
    for(int i=0; i<N; i++) {
        cin>>v[i];
    }
    int s=0, ans = 0;

    for(int e=0; e<N; e++) {
        mp[v[e]]++;
        while(mp.size() > 2) {
            mp[v[s]]--;
            if(mp[v[s]] == 0) mp.erase(v[s]);
            s++;
        }
        ans = max(ans, e-s+1);
    }

    cout<<ans;


}