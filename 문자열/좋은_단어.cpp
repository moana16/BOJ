#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int cnt = 0;
    while(n--) {
        string str; cin>>str;
        stack<char> s;
        for(int i=0; i<str.length(); i++) {
            if(s.empty()) s.push(str[i]);
            else {
                char t = s.top();
                if(t == str[i]) s.pop();
                else s.push(str[i]);
            }
        }
        if(s.empty()) cnt++;

    }
    cout<<cnt;
}