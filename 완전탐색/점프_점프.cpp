#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y,p1,p2;
    cin>>x>>y>>p1>>p2;

    for(int i=0; i<=1000000; i++) {
        if(p1 == p2) {
            cout<<p1;
            return 0;
        }
        if(p1 < p2) p1 += x;
        else p2 += y;
    }

    cout<<-1;
}