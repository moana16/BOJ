#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    int ans = 0;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];


    sort(v.begin(), v.end()); 

    do {
        int total = 0;
        for(int i=1; i<N; i++) {
            total += abs(v[i] - v[i-1]);
        }
        ans = max(ans, total);

    }
    while(next_permutation(v.begin(), v.end()));

    cout<<ans;
}