#include <bits/stdc++.h>
using namespace std;
#define N 9

vector<int> v;
bool checked[N];
int n,m;

void sol(int cnt, int cur) {
    if(cnt==m) {
        for(int i : v) {
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=1; i<=n; i++) {
        if(cur>i) continue;
        if(checked[i]==true) continue;
        checked[i]=true;
        v.push_back(i);

        sol(cnt+1,i);

        v.pop_back();
        checked[i]=0;
    }

}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>n>>m;
    sol(0,1);
}