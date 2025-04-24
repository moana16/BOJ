#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,w,L; cin>>n>>w>>L;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    queue<int> q;
    for(int i=0; i<w; i++) q.push(0);

    int idx = 0, sum = 0, t=0;
    while(!q.empty()) {

        sum -= q.front(); q.pop();
        if(idx < n) {
            if(sum + v[idx] <= L) {
                sum += v[idx];
                q.push(v[idx++]);
            }else q.push(0);
        }
        t++;
    }
    cout<<t;
}