#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;
    queue<int> q;
    vector<int> ans;

    for(int i=1; i<=N; i++) q.push(i);

    while(!q.empty()) {
        for(int i=0; i<K-1; i++) {
            int f = q.front();
            q.pop();
            q.push(f);
        }        
        ans.push_back(q.front());
        q.pop();
    }

    cout<<'<';
    for(int i=0; i<N-1; i++) cout<<ans[i]<<", ";
    cout<<ans[N-1]<<'>';
}