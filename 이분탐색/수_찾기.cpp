#include <bits/stdc++.h>
using namespace std;

int N,M;
int num[100003];


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) cin>>num[i];
    sort(num,num+N);
    cin>>M;
    while(M--) {
        int t; cin>>t;
        cout<<binary_search(num,num+N,t)<<'\n';
    }
    
}
