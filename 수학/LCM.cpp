#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(int a, int b) { return b == 0 ? a : GCD(b, a%b);}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int T; cin>>T;
    while(T--) {
        int a,b; cin>>a>>b;
        cout<<a / GCD(a,b) * b<<'\n';
    }
}