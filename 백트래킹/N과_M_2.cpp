#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];
bool isUsed[10];

void sol(int k) {
    if(k == m) {
        for(int i=0; i<m; i++) cout<<arr[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=1; i<=n; i++) {
        if(!isUsed[i]) {
            if(k > 0 && arr[k-1] > i) continue;
            isUsed[i]=true;
            arr[k]=i;
            sol(k+1);
            isUsed[i]=false;

        }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>n>>m;
    sol(0);



}