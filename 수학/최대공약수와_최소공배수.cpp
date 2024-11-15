#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a%b);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int a,b; cin>>a>>b;
    int gcd = GCD(a,b);
    int mn = a*b / gcd;

    cout<<gcd<<'\n'<<mn;
}