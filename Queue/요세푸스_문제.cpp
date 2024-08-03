#include<bits/stdc++.h>
using namespace std;

int n,k;
queue<int> q;
vector<int> ans;

int main() {
    cin>>n>>k;
    for(int i=1; i<=n; i++) q.push(i);
    int cnt = 1;
    while(q.size() >= 1) {
        for(int i=1; i<k;  i++) {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        int x = q.front(); q.pop();
        ans.push_back(x);
    }

    cout<<'<';
    for(int i=0; i<n; i++) {
        cout<<ans[i];
        if(i != n-1) cout<<", ";
    }
    cout<<">";

}