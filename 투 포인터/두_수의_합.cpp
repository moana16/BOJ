#include<bits/stdc++.h>
using namespace std;

int n,x,cnt = 0;
vector<int> v;

int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        int t; cin>>t;
        v.push_back(t);
    }
    cin>>x;

    sort(v.begin(), v.end());

    int s = 0;
    int e = n-1;

    while(s < e) {
        if(v[s] + v[e] == x) {
            cnt++;
            s++;
            e--;

        } 
        else if(v[s] + v[e] < x) s++;
        else e--;
    }
    cout<<cnt;

}