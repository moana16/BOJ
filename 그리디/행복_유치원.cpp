#include<bits/stdc++.h>
using namespace std;

int N,K,ans = 0;
vector<int> v;
vector<int> diff;

int main() {
    cin>>N>>K;
    int x;
    for(int i=0; i<N; i++) {
        cin>>x;
        v.push_back(x);
    }

    for(int i=1; i<N; i++) {
        diff.push_back(v[i]-v[i-1]);
    }

    sort(diff.begin(), diff.end(), greater<>());
    for(int i=K-1; i < diff.size(); i++) ans += diff[i];

    cout<<ans;

}
