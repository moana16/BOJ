#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 10e6+3;
int dpf[MAX];

int sol(int n) {

    if(n == 1) return 0;
    auto &res = dpf[n];
    if(res != -1) return res;
    res = sol(n-1) + 1;
    if(n%3==0) {
        res = min(res, sol(n/3)+1);
    }
    if(n%2==0)  {
        res = min(res, sol(n/2)+1);
    }
    
    return res;

}
int main() {
    int n;
    cin>>n;
    for(int i=0; i<=n; i++) dpf[i]=-1;
    cout<<sol(n);

}