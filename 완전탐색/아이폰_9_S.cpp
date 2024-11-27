#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);
    set<int> s;

    int ans = 0;

    for(int i=0; i<n; i++) {
        cin>>v[i];
        s.insert(v[i]);
    } 

    for(auto uniq : s) {
        int prev; int cnt = 0;
        int longArr = 0;

        for(int i=0; i<n; i++) {
            if(v[i] == uniq) continue;
            if(cnt == 0 || (cnt != 0 &&  prev != v[i])) {
                prev = v[i];
                if(longArr < cnt) longArr = cnt;
                cnt = 1;
            }
            else cnt++;
        }
        if(longArr < cnt) longArr = cnt;
        ans = max(ans, longArr);
    }

    cout<<ans;


}