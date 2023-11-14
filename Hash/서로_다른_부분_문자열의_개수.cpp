#include<bits/stdc++.h>
using namespace std;
set<string> s;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string str; cin>>str;
    int l = str.length();
    for(int i=0; i<l; i++) {
        for(int j=i; j<l; j++) {
            s.insert(str.substr(i,j-i+1));
        }
    }
    cout<<s.size();

}