#include<bits/stdc++.h>
using namespace std;

string str;
bool c[101];

void sol(int start, int end) {
    int min_char = 'Z'+1;
    int min_idx = -1;

    for(int i=start; i<=end; i++) {
        if(!c[i] && min_char > str[i]) {
            min_char = str[i];
            min_idx = i;
        }
    }
    if(min_char == 'Z'+1) return;
    c[min_idx] = true;
    for(int i=0;str[i]; i++) {
        if(c[i]) cout<<str[i];
    }
    cout<<'\n';
    sol(min_idx+1,end);
    sol(start, min_idx-1);

}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>str;

    sol(0, str.length()-1);

    return 0;
}
