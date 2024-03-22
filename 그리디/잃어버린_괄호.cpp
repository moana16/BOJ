#include<bits/stdc++.h>
using namespace std;

string s;
int ans = 0;
int sign = 1;
int tmp;


int main() {
    cin>>s;
    for(auto c : s) {
        if(c == '-' || c == '+') {
            ans += tmp * sign;
            if(c == '-') sign = -1;
            tmp = 0;
        }
        else {
            tmp *= 10;
            tmp += c - '0';
        }
    }
    ans += tmp * sign;
    cout<<ans;



}