#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string str; cin>>str;
    string ans = "";
    int cnt = 0 ;

    for(auto c : str) {
        if(c == 'X') {
            cnt++;
        }
        else {
            if(cnt > 0) {
                if(cnt % 2 == 1) {
                    cout<<-1;
                    return 0;

                }
                while(cnt > 0) {
                    if(cnt - 4 < 0) {
                        ans += "BB";
                        cnt -= 2;
                    }
                    else {
                        ans += "AAAA";
                        cnt -= 4;
                    }
                }
            }
            ans += '.';   
        }
    }
    if(cnt > 0) {
        if(cnt % 2 == 1) {
            cout<<-1;
            return 0;

        }
        while(cnt > 0) {
            if(cnt - 4 < 0) {
                ans += "BB";
                cnt -= 2;
            }
            else {
                ans += "AAAA";
                cnt -= 4;
                }
        }
    }

    if(ans.size() == 0) cout<<-1;
    else cout<<ans;
}