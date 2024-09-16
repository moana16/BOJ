#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    ll W; 
    cin>>n>>W;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll coin = 0;

    for(int i=0; i<n-1; i++) {
        if(v[i] < v[i+1]) {
            if(coin == 0) {
                coin = W / v[i];
                W %= v[i];

            }
        }
        else if(v[i] > v[i+1]) {
            W += coin * v[i];
            coin = 0;
        }
    }

    if(coin > 0) W += coin * v[n-1];

    cout<<W;


}