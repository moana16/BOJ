#include <bits/stdc++.h>
using namespace std;

int N; 
priority_queue<int, vector<int>,greater<int>> pq;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>N;
    
    while(N--) {
        int x; cin>>x; 
        if(x == 0) {
            if(pq.empty()) cout<<0<<'\n';
            else {
                cout<<pq.top()<<'\n';
                pq.pop();

            }
        }
        else pq.push(x);
    }
}