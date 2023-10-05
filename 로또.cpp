#include <bits/stdc++.h>
using namespace std;
int arr[20];
int lotto[6];
void sol(int k, int cur,int n) {
    if(k == 6) {
        for(int i=0; i<6; i++) cout<<lotto[i]<<" ";
        cout<<'\n';
        return;
    }

    for(int i=cur; i<n; i++) {
        lotto[k] =arr[i];
        sol(k+1, i+1,n);
    }
}

int main() {
    while (true)
    {
        int n; cin>>n;
        
        if(n == 0) return 0;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            arr[i] = x;
        }

        sol(0,0, n);
        cout<<'\n';
    }

    
    
}