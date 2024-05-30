#include<bits/stdc++.h>
using namespace std;

string S,T;
bool isMake = false;

void sol(string str) {
    if(str.length() == S.length()) {
        if(str == S) isMake = true;
        return;
    }
    if(isMake) return;

    if(str[str.length()-1] == 'A') sol(str.substr(0,str.length()-1));
    if(str[0] == 'B') {
        reverse(str.begin(), str.end());
        sol(str.substr(0,str.length()-1));
    }
    
    

}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>S>>T;

    sol(T);
    if(isMake) cout<<1;
    else cout<<0;
}