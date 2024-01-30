#include<bits/stdc++.h>
using namespace std;

bool comp(const string& str1, const string& str2) {
    if(str1.size() == str2.size()) return str1<str2;
    else return str1.size() < str2.size();
}

int main() {
    int N; cin>>N;
    vector<string> v;
    while(N--) {
        string s; cin>>s;
        string n="";
        for(auto c : s) {
            if(isdigit(c)) n += c;
            else {
                if(n.length() != 0) {
                    while(n.length() >= 2 && n[0] == '0') n.erase(0,1);
                    v.push_back(n);
                    
                }
                n="";
            }
        }
        if(n.length() != 0) {
            while(n.length() >= 2 && n[0] == '0') n.erase(0,1);
            v.push_back(n);
        }
    }
    sort(v.begin(), v.end(),comp);
    for(auto c : v) cout<<c<<'\n';
}