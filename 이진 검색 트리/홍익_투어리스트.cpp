#include<bits/stdc++.h>
using namespace std;

set<int> s;
int cur = 1;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++) {
        int m; cin>>m;
        if(m == 1) s.insert(i);
    }
    while(q--) {
        int x; cin>>x;
        if(x == 1) {
            int i; cin>>i;
            if(s.find(i) != s.end()) s.erase(i);
            else s.insert(i);
            
        }
        else if(x == 2) {
            int m; cin>>m;
            cur = (cur + m - 1) % n + 1;

        }
        else {
            if(s.empty()) cout<<-1<<'\n';
            else {
                auto it = s.lower_bound(cur);
                if(it != s.end()) {
                    cout<<*it-cur<<'\n';
                }
                else cout<<n-cur+*s.begin()<<'\n';
            }

        }
    }

}