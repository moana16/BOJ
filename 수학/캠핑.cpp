#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 1;
    while(true) {
        int L, P, V;
        int ans = 0;
        cin>>L>>P>>V;
        if(L == 0 && P == 0 && V == 0) break;
        cout<<"Case "<<cnt<<": "<<V / P * L + min(V%P,L)<<'\n';
        cnt++;
    }
}
