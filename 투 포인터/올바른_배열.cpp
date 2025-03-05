#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int j=0, ans = 5;

    for(int i=0; i<n; i++) {
        while(j < n && v[j] < v[i]+5) {
            j++;
        }
        int len = j - i;
        ans = min(ans, 5-len);
    }

    cout<<ans;
}