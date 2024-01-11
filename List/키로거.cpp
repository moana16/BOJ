#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) {
        string l; cin>>l;
        list<char> pw = {};
        auto cursor = pw.begin();
        for(auto c : l) {
            if(c == '<') {
                if(cursor != pw.begin()) {
                    cursor--;
                }
            }
            else if(c == '>') {
                if(cursor != pw.end()) {
                    cursor++;
                }
            }
            else if(c == '-') {
                if(cursor != pw.begin()) cursor = pw.erase(--cursor);

                
            }
            else {
                pw.insert(cursor,c);

            }
            

        }
        for(auto c : pw) cout<<c;
        cout<<'\n';
    }
}