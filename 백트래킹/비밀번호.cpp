#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
vector<int> v;


void sol(vector<int> pw) {
    if(pw.size() == n) {
        for(int i=0; i<m; i++) {
            if(find(pw.begin(), pw.end(), v[i]) == pw.end()) return;
        }
        ans++;
        return;
    }

    for(int i=0; i<=9; i++) {
        pw.push_back(i);
        sol(pw);
        pw.pop_back();
    }

}
int main() {
    cin>>n>>m;

    for(int i=0; i<m; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    vector<int> pw;
    sol(pw);
    cout<<ans;



}