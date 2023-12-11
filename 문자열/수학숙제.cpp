#include<bits/stdc++.h>
using namespace std;

vector<string> v;

bool comp(const string& str1, const string& str2) {
    if(str1.size() == str2.size()) return str1<str2;
    else return str1.size() < str2.size();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    while(N--) {
        string s; cin>>s;
        string sub;
        for(int i=0; i<s.length(); i++) {
            if(isdigit(s[i])) sub += s[i];
            else {
                if(sub != "") {
                    while(sub.length() >= 2 && sub[0] == '0') sub.erase(0,1);
                    v.push_back(sub);

                }
                sub = "";

            }
        }
        if(sub != "") {
            while(sub.length() >= 2 && sub[0] == '0') sub.erase(0,1);
            v.push_back(sub);
        }
        
    }
    sort(v.begin(),v.end(),comp);
    for(auto c : v) cout<<c<<'\n';    
}