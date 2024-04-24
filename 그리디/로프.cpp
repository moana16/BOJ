#include<bits/stdc++.h>
using namespace std;

int arr[100003];
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];

    sort(arr, arr+N);
    
    int mx = 0;
    for(int i=1; i<=N; i++) {
        mx = max(mx, arr[N-i] * i);
    }
    cout<<mx;


}