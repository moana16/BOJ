#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int K,N;
vector<int> v;

int main() {
    cin>>K>>N;
    for(int i=0; i<K; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    ll s = 1;
    ll e = *max_element(v.begin(), v.end());
    

    while(s <= e) {
        ll mid = s + (e - s) / 2;
        int total = 0;

        for(int i=0; i<K; i++) {
            total += v[i]/mid;
            
        }

        if(total < N) e = mid-1;
        else s = mid+1;
    }
    cout<<e;
}