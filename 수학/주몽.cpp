#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int cnt = 0;

int main() {
    int n; cin>>n;
    int m; cin>>m;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int st = 0;
    int en = n-1;
    
    while(st < en) {
        int total = v[st] + v[en];
        if(total == m) {
            cnt++;
            st++;
            en--;
        }
        else if(total < m) {
            st++;
        }
        else en--;

    }

    cout<<cnt;
}