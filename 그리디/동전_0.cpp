#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[11];
int ans = 0;

int main() {
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i = n-1; i >= 0; i--) {
        ans += k / arr[i];
        k %= arr[i];
    }
    cout<<ans;
}