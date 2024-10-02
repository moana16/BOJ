#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;

    while(T--) {
        int N; cin>>N;
        vector<long long> arr(N);
        for(int i=0; i<N; i++) cin>>arr[i];

        long long sum = arr[0];
        long long mx = arr[0];

        for(int i=1; i<N; i++) {
            sum = max(arr[i], sum + arr[i]);
            mx = max(mx, sum);
        }

        cout<<mx<<'\n';
    }
}