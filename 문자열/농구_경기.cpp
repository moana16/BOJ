#include<bits/stdc++.h>
using namespace std;

int alpha[26];
string tmp = "abcdefghijklmnopqrstuvwxyz";

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        string s; cin>>s;
        alpha[s[0]-'a']++;
    }
    bool flag = false;
    for(int i=0; i<26; i++) {
        if(alpha[i] >= 5) {
            cout<<tmp[i];
            flag = true;
        }
    }
    if(!flag) cout<<"PREDAJA";
}