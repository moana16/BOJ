
#include<bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,M; cin>>A>>B>>C>>M;
    int ans = 0, p = 0;
    int n = 24;
    while(n--) {
        if(p + A <= M) {
            ans += B;
            p += A;
        }else {
            p -= C;
            if(p < 0) p = 0;
        }
    }
    cout<<ans;
}
