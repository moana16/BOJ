#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int N; cin>>N;
    map<string, int> mp;

    for(int i=0; i<N; i++) {
        string str; cin>>str;
        int idx = str.find('.');
        string extension = str.substr(idx+1); 
        mp[extension]++;
    }

    for(auto m : mp) {
        cout<<m.first<<" "<<m.second<<"\n";
    }
}