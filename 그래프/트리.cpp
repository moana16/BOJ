#include<bits/stdc++.h>
using namespace std;

int root,num;
vector<int> v[55];


int dfs(int here) {
    int ret=0,child=0;
    for(auto c : v[here]) {
        if(c == num) continue;
        ret += dfs(c);
        child++;
    }
    if(child == 0) return 1;
    return ret;
}

int main() {
    int n; cin>>n;
    int ans = 0;

    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if(x == -1) root = i;
        else {
            v[x].push_back(i);
        }
    }
    cin>>num;

    if(num == root) cout<<0;
    else {
        cout<<dfs(root);
    }

}