#include<bits/stdc++.h>
using namespace std;

int main() {
    while(true) {
        string num; cin>>num;
        if(num == "0") return 0;

        string reversedNum = string(num.rbegin(), num.rend());
        
        if(num == reversedNum) cout<<"yes\n";
        else cout<<"no\n";
    }
}