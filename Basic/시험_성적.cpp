#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin>>n;

    if(90 <= n && n <=100) cout<<"A";
    else if( 80 <= n) cout<<"B";
    else if( 70 <= n) cout<<"C";
    else if( 60 <= n) cout<<"D";
    else cout<<"F";

}