#include<bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int m; cin>>m;
        priority_queue<int, vector<int>> mx_pq;
        priority_queue<int, vector<int>, greater<>> mn_pq;

        vector<int> ans;

        for(int i=1; i<=m; i++) {
            int x; cin>>x;

            if(mx_pq.empty() || x <= mx_pq.top()) mx_pq.push(x);
            else mn_pq.push(x);

            if(mx_pq.size() > mn_pq.size() + 1) {
                mn_pq.push(mx_pq.top());
                mx_pq.pop();
            }
            else if(mn_pq.size() > mx_pq.size()) {
                mx_pq.push(mn_pq.top());
                mn_pq.pop();
            }

            if(i % 2 == 1) ans.push_back(mx_pq.top());
            
        }
        cout<<ans.size()<<"\n";
        for(int i=0; i<ans.size(); i++) {
            if(i != 0 && i%10 == 0) cout<<'\n';
            cout<<ans[i]<<" ";

        }
        cout<<'\n';

    }
}