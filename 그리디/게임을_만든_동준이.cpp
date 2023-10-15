#include <bits/stdc++.h>
using namespace std;

int N;
int arr[102];
int ans = 0;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    for(int i = N-1; i>=0; i--) {
        if(arr[i] <= arr[i-1]) {
            int tmp = arr[i-1];
            arr[i-1] = arr[i] - 1;
            ans += tmp - arr[i-1];
        }
    }
    cout<<ans;
}