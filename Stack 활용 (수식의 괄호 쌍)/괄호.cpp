#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    while (n--)
    {
        string str; cin>>str;
        stack<char> s;

        for(auto c : str) {
            if(c == '(') s.push(c);
            else if(c == ')'){
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                    //cout<<'!';
                }
                else {
                    s.push(c);
                }
            }    
        }
        //cout<<s.size();
        if(s.empty()) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    
}