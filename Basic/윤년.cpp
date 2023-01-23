#include <bits/stdc++.h>
using namespace std;

//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int y; cin>>y;
    
    if( y%4 == 0 ) {
        if(y % 100 != 0 || y % 400 == 0) cout<<1;
        else cout<<0;
    }

    else cout<<0;

}