#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    priority_queue<int, vector<int>, greater<>> mnp;
    priority_queue<int, vector<int>> mxp;

    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(mxp.empty() || x <= mxp.top()) mxp.push(x);
        else mnp.push(x);

        if(mxp.size() > mnp.size() + 1) {
            mnp.push(mxp.top());
            mxp.pop();
        }
        else if(mnp.size() > mxp.size()) {
            mxp.push(mnp.top());
            mnp.pop();
        }
        cout<<mxp.top()<<'\n';
    }
}
