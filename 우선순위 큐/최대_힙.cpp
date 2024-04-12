#include<bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> pq;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;

    while(N--) {
        int x; cin>>x;
        if(x == 0) {
            if(pq.size() == 0) cout<<0<<'\n';
            else {
                cout<<pq.top()<<'\n';
                pq.pop();

            }
        }
        else pq.push(x);
    }
}