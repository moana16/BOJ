#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t,n; cin>>t;
    string p;
    
    while(t--) {
        cin>>p>>n;
        deque<int> dq;
        string arr; cin>>arr;
        bool flag = false, error = false;
        string num ="";
        for(auto c : arr) {
            if(isdigit(c)) num += c;
            else if(num.size() != 0 ) {
                dq.push_back(stoi(num));
                num = "";

            }
        }

        for(auto c : p) {
            if(c == 'R') { 
                flag = !flag;
            }
            else {
                if(dq.empty()) {    
                    error = true;
                    break;
                }
                if(!flag) dq.pop_front();
                else dq.pop_back();

            }
        }
        if(error) cout<<"error\n";
        else if(!error && dq.empty()) cout<<"[]\n";
        else if(!error && !dq.empty() ) {
            cout<<'[';
            if(flag) {
                while(!dq.empty()) {
                    cout<<dq.back();
                    dq.pop_back();
                    if(!dq.empty()) cout<<",";
                }
                
            }
            else {
                while(!dq.empty()) {
                    cout<<dq.front();
                    dq.pop_front();
                    if(!dq.empty()) cout<<",";
                }
            }
            cout<<"]\n";
        }
    }
}