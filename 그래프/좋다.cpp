#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int arr[2002];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N; cin>>N;
    for(int i=0; i<N; i++) cin>>arr[i];
    sort(arr, arr+N);
    for(int i=2; i<N; i++) {
        int st = 0;
        int en = i-1;
        while(st < en) {
            if(arr[st] + arr[en] == arr[i]) {
                ans++;
                break;
            }
            if(arr[st] + arr[en] > arr[i]) en--;
            else st++;
        }
    }
    cout<<ans;
}