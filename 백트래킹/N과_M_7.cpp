#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;
int arr[10];

void sol(int k) {
    if(k==m) {
        for(int i=0; i<m; i++) cout<<arr[i]<<" ";
        cout<<'\n';
        return;
    }
    for(int i=0; i<n; i++) {
        arr[k] = v[i];
        sol(k+1);
    }
}

int main() {
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    sol(0);
    
}