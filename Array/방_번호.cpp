#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    int num[10];
    int cnt = 1;

    fill(num, num + 10, 0);

    for(auto c : s) {
        num[c-48]++;
    }
    
    for(int i=0; i<10; i++) { 
        if((i == 6) || (i == 9))  continue;
        cnt = max(cnt, num[i]);
    }

    cnt = max(cnt, (num[6]+num[9]+1)/2); // 같은 숫자 여러개 + 6,9개 같이 생각 못함
    cout<<cnt;
}