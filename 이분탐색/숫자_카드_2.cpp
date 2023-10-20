#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[500005];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr,arr+N);
    cin>>M;
    while(M--) {
        int t; cin>>t;
        cout<<upper_bound(arr,arr+N,t)-lower_bound(arr,arr+N,t)<<" ";
    }
}