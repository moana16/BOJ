#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,A,D; cin>>N>>A>>D;
    int seq = A, cnt = 0;;
    
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(x == seq) {
            seq += D;
            cnt++;
        }
    }

    cout<<cnt;
}