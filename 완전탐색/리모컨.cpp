#include<bits/stdc++.h>
using namespace std;


bool isBroken[10];

bool canMakeChannel(int channel) {
    if(channel == 0) return !isBroken[0];

    while(channel > 0) {
        if(isBroken[channel % 10]) {
            return false;
        }
        channel /= 10;
    }
    return true;
}

int getChannelLength(int channel) {
    if(channel == 0) return 1;
    int len = 0;
    while(channel > 0) {
        len++;
        channel /= 10;
    }
    return len;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int num; cin>>num;
    int m; cin>>m;
    
    memset(isBroken, false, sizeof(isBroken));

    for(int i=0; i<m; i++) {
        int x; cin>>x;
        isBroken[x] = true;
    }

    int res = abs(num - 100);

    for(int i=0; i<=1000000; i++) {
        if(canMakeChannel(i)) {
            int len = getChannelLength(i);
            int pressCount = len + abs(num - i);
            res = min(res, pressCount);
        }
    }

    cout<<res;
}