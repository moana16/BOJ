#include <bits/stdc++.h>
using namespace std;

deque<int> d;
//#1은 pop_front
//#2는..??
//#3는...

int main() {
    int n,m; cin>>n>>m;
    for(int i=1; i<=n; i++) d.push_back(i);
    int ret = 0;
    while(m--) {
        int x; cin>>x;
        int idx = find(d.begin(), d.end(), x) - d.begin();
        while(d.front() != x) {
            if( idx < (int)d.size() - idx) {
                d.push_back(d.front());
                d.pop_front();
            }
            else {
                d.push_front(d.back());
                d.pop_back();
            }
            ret++;
        }
        d.pop_front();
    }
    cout<<ret;
}