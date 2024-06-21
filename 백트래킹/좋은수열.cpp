#include<bits/stdc++.h>
using namespace std;

int N;
string ans;

bool check(const string& s) {
    int len = s.length();
    for(int i=1; i<=len/2; i++) {
        if(s.substr(len-i, i) == s.substr(len - 2*i, i)) return false;
    }
    return true;
}

void sol(string& s) {
    if(s.length() == N) {
        cout<<s;
        exit(0);
    }

    for(char i='1'; i<='3'; i++) {
        s.push_back(i);
        if(check(s)) {
            sol(s);
        }
        s.pop_back();
        
    }


}

int main() {
    cin>>N;
    string s="";
    sol(s);
    cout<<ans;
}