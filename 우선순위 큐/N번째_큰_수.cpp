#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    priority_queue<int,vector<int>, greater<>> pq;

    for (int i = 0; i < n * n; i++) {
        int x; cin>>x;
        pq.push(x);
        if(n < (int)pq.size()) pq.pop();
    }
    cout<<pq.top();
}