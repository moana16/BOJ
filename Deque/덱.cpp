#include <bits/stdc++.h>
using namespace std;

deque<int> d;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    while(n--) {
        string s; cin>>s;
        if(s == "push_back") {
            int x; cin>>x;
            d.push_back(x);

        }
        else if(s == "push_front") {
            int x; cin>>x;
            d.push_front(x);
        }
        else if(s == "pop_front") {
            if(d.empty()) cout<<-1<<"\n";
            else {
                int x = d.front();
                d.pop_front();
                cout<<x<<"\n";
            }
        }
        else if(s == "pop_back") {
            if(d.empty()) cout<<-1<<"\n";
            else {
                int x = d.back();
                d.pop_back();
                cout<<x<<"\n";
            }
        }
        else if(s=="size" ) cout<<d.size()<<"\n";
        else if(s == "empty") {
            if(d.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(s == "front") {
            if(d.empty()) cout<<-1<<"\n";
            else cout<<d.front()<<"\n";
        }
        else if(s == "back") {
            if(d.empty()) cout<<-1<<"\n";
            else cout<<d.back()<<"\n";
        }
    }
}