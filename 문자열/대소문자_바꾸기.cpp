#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    string ans;
    
    for(auto c : str) {
        if(c >= 'a' && c <= 'z') ans.push_back(toupper(c));
        else ans.push_back(tolower(c));
    }
    cout<<ans;
}