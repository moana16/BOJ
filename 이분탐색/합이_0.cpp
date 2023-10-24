#include <bits/stdc++.h>
using namespace std;

int N;
int arr[10003];
long long ans = 0;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr, arr+N);
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            auto ub = upper_bound(arr+j+1, arr+N, -arr[i] - arr[j]);
            auto lb = lower_bound(arr+j+1, arr+N, -arr[i] - arr[j]);
            ans += ub-lb;
        }
    }
    cout<<ans;
}