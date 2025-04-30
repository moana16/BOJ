#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    deque<int> dq;
    for(int i=1; i<=N; i++) dq.push_back(i);

    int cnt = 0;
    for(int i=0; i<M; i++) {
        int x; cin>>x;
        int idx = find(dq.begin(), dq.end(), x) - dq.begin();

        while(dq.front() != x) {
            if(idx < (int)dq.size() - idx) {
                dq.push_back(dq.front());
                dq.pop_front();
            }else {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cnt++;
        }
        dq.pop_front();

    }

    cout<<cnt;
}