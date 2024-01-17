#include<bits/stdc++.h>
using namespace std;

int main () {
    int n; cin>>n;
    string pattern; cin>>pattern;

    auto star = pattern.find("*");

    string start = pattern.substr(0, star);
    string end = pattern.substr(star + 1);
    
    while(n--) {
        string s; cin>>s;

        if(s.length() < start.length() + end.length()) {
            cout<<"NE\n";
            continue;
        }
        if(s.substr(0,start.length()) == start && s.substr(s.length()-end.length()) == end && s.length() >= start.length() + end.length()) cout<<"DA\n";
        else cout<<"NE\n";
    }
    
}