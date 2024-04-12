#include<bits/stdc++.h>
using namespace std;
int N;
priority_queue<int, vector<int>, greater<>> pq;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    int x;
    for(int i=0; i<N*N; i++) {
        cin>>x;
        pq.push(x);
        if(N < (int)pq.size()) pq.pop();
    }
    cout<<pq.top();
}