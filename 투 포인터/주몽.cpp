#include<bits/stdc++.h>
using namespace std;

int main() {
    int M,N,ans = 0;
    cin>>N>>M;
    vector<int> v;
    while(N--) {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int s = 0;
    int e = v.size()-1;

    while(s < e) {
        int total = v[s] + v[e];
        if(total == M) {
            ans++;
            s++;
            e--;
        }

        else if(total < M) {
            s++;
        }
        else e--;
    }
    cout<<ans;
}