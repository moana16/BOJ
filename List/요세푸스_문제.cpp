#include<bits/stdc++.h>
using namespace std;

int pre[5005], nxt[5005];
int idx = 1;
vector<int> ans;

int main() {
    int N,k; cin>>N>>k;

    for(int i=1; i<=N; i++) {
        pre[i] = (i == 1) ? N : i-1;
        nxt[i] = (i == N) ? 1 : i+1;
    }

    int len=N;

    for(int cur=1; len != 0; cur=nxt[cur] ) {
        if(idx == k) {
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            ans.push_back(cur);
            idx = 1;
            --len;
        }
        else ++idx;
    }

    cout<<'<';
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i];
        if(i != ans.size()-1) cout<<", ";
    }
    cout<<'>';

    

}