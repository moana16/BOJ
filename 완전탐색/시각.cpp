#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;

    int cnt = 0;
    string s,m,h;
    string sk = to_string(K);

    for(int i=0; i<=N; i++) {
        h = to_string(i);
        if(i < 10) h = '0' + h;
        for(int j=0; j<60; j++) {
            m = to_string(j);
            if(j < 10) m = '0' + m;
            for(int k=0; k<60; k++) {
                s = to_string(k);
                if(k < 10) s = '0' + s;
                if(s.find(sk) != string::npos || m.find(sk) != string::npos || h.find(sk) != string::npos) cnt++;
            }
        }
    }

    cout<<cnt;
}