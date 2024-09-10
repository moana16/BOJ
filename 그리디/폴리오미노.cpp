#include<bits/stdc++.h>
using namespace std;

string sol(int cnt,  string ans) {
    while(cnt > 0) {
        if(cnt - 4 >= 0) {
            ans += "AAAA";
            cnt -= 4;
        }
        else if(cnt -2 >= 0) {
            ans += "BB";
            cnt -= 2;
        }
    }
    return ans;
}

int main() {
    string str; cin>>str;
    string tmp, ans;
    for(auto c : str) {
        if(c == 'X') tmp += c;
        else {
            int sz = tmp.size();

            if(sz % 2 == 1) {
                cout<<-1;
                return 0;
            }
            ans = sol(sz, ans) + ".";
            tmp = "";
        }
    }
    int sz = tmp.size();

    if(sz % 2 == 1) {
        cout<<-1;
        return 0;
    }
    ans = sol(sz, ans);

    cout<<ans;



}