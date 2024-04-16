#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int k; cin>>k;
        string command;
        int n;
        multiset<int> ms;
        while(k--) {
            cin>>command>>n;
            if(command == "I") ms.insert(n);
            else {
                if(ms.size() == 0) continue;
                if(n == 1) ms.erase(--ms.end());
                else ms.erase(ms.begin());
            }
            
        }

        if(ms.empty()) cout<<"EMPTY\n";
        else cout<<*--ms.end()<<" "<<*ms.begin()<<'\n';

    }
}