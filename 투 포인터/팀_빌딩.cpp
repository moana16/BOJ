#include<bits/stdc++.h>
using namespace std;

int N;
long long ans = 0;
vector<int> v;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    int s = 0;
    int e = N-1;
    while(e-s-1 >= 1) {
        int mn = min(v[s], v[e]);
        long long power = mn * (e-s-1);
        ans = max(ans, power);

        if(v[s] < v[e]) s++;
        else if(v[s] == v[e]) {
            s++;
            e--;
        }
        else e--;

    }
    cout<<ans;
}