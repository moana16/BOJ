#include <bits/stdc++.h>
using namespace std;

int ans=0;
vector<int> pos, neg;
int N;
int i;
void sol(vector<int> v) {
    int len = v.size();
    i = len-1;
    while(i >= 0) {
        if(i == 0) {
            ans += v[i];
            break;
        }
        ans += (v[i]*v[i-1]);
        i = i-2;
    }

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    cin>>N;
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        if(x == 1) ans++;
        else if(x <= 0) neg.push_back(x);
        else pos.push_back(x);
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(),greater<>());

    sol(pos);
    sol(neg);
    
    cout<<ans;

}