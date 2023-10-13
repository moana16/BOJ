#include <bits/stdc++.h>
using namespace std;

int tmp;
int sign = 1;
int ans = 0;
//- 부호 전에는 무조건 다 더해주고 -부호가 나오면 모두 -해줌
//숫자는 곱하기 10해주고 더해주기
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin>>s;
    for(auto c : s) {
        if(c == '+' || c == '-') {
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