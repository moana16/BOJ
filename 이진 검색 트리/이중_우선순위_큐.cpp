#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> T;
    while(T--) {
        int N; cin>>N;
        multiset<int> ms;
        while(N--) {
            string s;
            int n;
            cin>>s>>n;
            if(s == "I") {
                ms.insert(n);
            }
            else if(s == "D") {
                if(!ms.empty()) {
                    if(n == 1) ms.erase(--ms.end());
                    else ms.erase(ms.begin());

                }
                


            }
        }
        if(ms.empty()) cout<<"EMPTY"<<'\n';
        else cout<<*--ms.end()<<" "<<*ms.begin()<<'\n';
    }
}