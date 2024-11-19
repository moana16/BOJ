#include<bits/stdc++.h>
using namespace std;

vector<int> sol(int cur, int nxt) {
    vector<int> nums;
    nums.push_back(cur);
    nums.push_back(nxt);

    while(cur >= nxt) {
        nums.push_back(cur-nxt);
        int tmp = cur-nxt;
        cur = nxt;
        nxt = tmp;
    }
    return nums;

}

int main() {
    int n; cin>>n;
    int mx = 0;
    vector<int> ans;
    for(int i=0; i<=n; i++) {
        vector<int> tmp;
        tmp = sol(n,i);

        if(tmp.size() > mx) {
            mx = tmp.size();
            ans = tmp; 
        }
    }

    cout<<ans.size()<<"\n";
    for(auto a : ans) cout<<a<<" ";
}