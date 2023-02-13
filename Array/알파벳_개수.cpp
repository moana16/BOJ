#include <bits/stdc++.h>
using namespace std;

int alph[26];
string s;

void sol() {
    for(auto c : s) {
        alph[c-97]++;
    }
    for(int i=0; i<26; i++) cout<<alph[i]<<" ";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>s;
    sol();

}