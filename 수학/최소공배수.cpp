#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a%b);
}

int main() {
    int t; cin>>t;
    while(t--) {
        int A,B; cin>>A>>B;
        int gcd = GCD(A,B);
        cout<<(A*B) / gcd<<'\n';
    }
}