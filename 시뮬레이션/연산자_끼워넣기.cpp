#include <bits/stdc++.h>
using namespace std;
int n;
int arr[102];
int operators[4];
int mx = -0x7f7f7f7f;
int mn = 0x7f7f7f7f;

void sol(int ans, int k) {
    if(k == n) {
        mx = max(mx, ans);
        mn = min(mn, ans);
        return;
    }
    for(int i=0; i<4; i++) {
        if(!operators[i]) continue;
        operators[i]--;
        if(i == 0) sol(ans + arr[k], k+1);
        else if(i == 1) sol(ans - arr[k], k+1);
        else if(i == 2) sol(ans * arr[k], k+1);
        else if(i == 3) sol(ans / arr[k], k+1);
        operators[i]++;
    }
}

int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    for(int i=0; i<4; i++) {
        cin>>operators[i];
    }
    
    sol(arr[0],1);
    cout<<mx<<'\n'<<mn;


}