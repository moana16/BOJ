#include <bits/stdc++.h>
using namespace std;
#define N 8

void sol(int n, int m, int choose, int arr[]) {
    if(choose==m) {
        for(int i=0; i<m; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=1; i<=n; i++) {
        int exist = 0;
        for(int j=0; j<choose;j++) {
            if(arr[j]==i) exist=1;
        }
        if(exist==0) {
            arr[choose]=i;
            sol(n,m,choose+1,arr);
            arr[choose]=0;
        }
        
    }

}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,m;
    int A[N];
    cin>>n>>m;
    sol(n,m,0,A);

}