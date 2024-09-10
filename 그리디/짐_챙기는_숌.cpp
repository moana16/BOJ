#include<bits/stdc++.h>
using namespace std;

int N,M, cnt = 0;

int main() {
    cin>>N>>M;
    vector<int> v(N);
    int tmp = 0;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(tmp + x > M) {
            cnt++;
            tmp = x;
        } else tmp += x;

    }
    if(tmp > 0) cnt++;

    cout<<cnt;



}