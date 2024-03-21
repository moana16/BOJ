#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> v;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<>());

    long long sum = 0;
    for(int i=0; i<N; i++){
        long long tmp = v[i] - i;
        if(tmp >= 0) sum += tmp;
    }

    cout<<sum;

}