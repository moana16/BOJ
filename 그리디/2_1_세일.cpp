#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<>());

    int sum = 0;

    for(int i=0; i<n; i++) {
        if((i%3) != 2) {
            sum += v[i];
        }
    }
    cout<<sum;
}
