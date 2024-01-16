#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string ans;
    for(auto c : str) {
        if(isdigit(c) || c == ' ') ans += c;
        else {
            if( c >= 'a' && c <= 'z') {
                char nw = (c-'a' + 13) % 26 + 'a';
                ans += nw;
            }
            else if(c >= 'A' && c <= 'Z') {
                char nw = (c-'A' + 13) % 26 + 'A';
                ans += nw;
            }
        }
    }
    cout<<ans;
}