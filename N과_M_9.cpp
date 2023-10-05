#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;
vector<int> arr(n);
set<vector<int>> s;

void sol(int k) {
    if(k==m) {
        s.insert(arr);
        return;
    }
    for(int i=0; i<n; i++) {
        arr[k]=arr[i];
        sol(k+1);

    }
}
int main() {
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);

    }
    sort(v.begin(),v.end());
    sol(0);
    for(int i=0; i<s.size(); i++) {
        cout<<s[i]<<'\n';
    }


}