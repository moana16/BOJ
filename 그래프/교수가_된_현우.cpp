#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) {
        int N; cin>>N;
        int count = 0;
        for (long long i = 5; N / i >= 1; i *= 5) {
            count += N / i;
        }
        cout<<count<<'\n';
    }
}