#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    string ans;
    bool flag = false;
    if(str.find("_") != string::npos) {
        for(int i=0; i<str.length(); i++) {
            if(str[i] == '_' && i == 0 || str[i] == '_' && i == str.length()-1 ) flag = true;
            if(str[i] == '_' && str[i+1] == '_' || str[i] == '_' && str[i-1] == '_') flag = true;
            if(str[i] == '_') {
                if(isupper(str[i+1])) flag = true;
                ans += toupper(str[i+1]);
                i++;
            }
            else if(isupper(str[i])) {
                flag = true;
    
            }
            else ans += str[i];
        }
        if(flag) cout<<"Error!";
        else cout<<ans;
    }
    else {
        
        for(int i=0; i<str.length(); i++) {
            if(isupper(str[i]) && i == 0) flag = true;
            if(isupper(str[i])) {
                ans += '_';
                ans += tolower(str[i]);
            }
            else ans += str[i];
        }
        if(flag) cout<<"Error!";
        else cout<<ans;
    }
}