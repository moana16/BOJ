#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    string str; cin>>str;
    int cnt_B = 0, cnt_R = 0;
    string s = "";
    string tmp = "";
    for(auto c : str) {
        if(tmp.size() == 0) tmp += c;
        else {
            if(c == 'B') {
                if(tmp[0] == 'B') tmp += c;
                else {
                    s += tmp[0];
                    tmp = "B";
                }
            }
            else {
                if(tmp[0] == 'R') tmp += c;
                else {
                    s += tmp[0];
                    tmp = "R";
                }

            }
        }
    }
    s += tmp[0];


    for(auto c : s) {
        if(c == 'B') cnt_B++;
        else cnt_R++;
    }

    if(cnt_B > cnt_R) cout<<cnt_R + 1;
    else cout<<cnt_B+1;
}