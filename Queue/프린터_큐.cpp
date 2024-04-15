#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    int n,m,mx,cnt;
    while(t--) {
        cin>>n>>m;
        cnt = 0;
        queue<pair<int,int>> q;
        priority_queue<int, vector<int>> pq;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            q.push({i,x});
            pq.push(x);
        }

        mx = pq.top();

        while(!q.empty()) {
            
            int idx = q.front().first;
            int x = q.front().second;
            q.pop();

            if(x < mx) {
                q.push({idx,x});   
            }
            else {
                pq.pop();
                mx = pq.top();
                cnt++;

                if(idx == m) {
                    cout<<cnt<<'\n';
                    break;
                }
            }
        } 
    }
}