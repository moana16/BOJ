#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v;

    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    int s = 0;
    int e = 0;

    long long ans = 0;
    unordered_map<int,int> cnt;

    while(s < N) {
        if(e == N) {
            e = s;
            s++;
        }
        else {
            if(cnt[v[e]] == 0) {
                cnt[v[e]]++;
                e++;
                ans += (e-s);
            }
            else {
                cnt[v[s]]--;
                s++;
            }
        }
    }
    cout<<ans;
}