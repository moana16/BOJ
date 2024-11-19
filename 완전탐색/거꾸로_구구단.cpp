#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;

    int mx = 0;

    for(int i=1; i<=K; i++) {
        int n = N * i;
        string num = to_string(n);
        reverse(num.begin(), num.end());
        int revNum = stoi(num);
        if(mx < revNum) mx = revNum;
    }

    cout<<mx;
}