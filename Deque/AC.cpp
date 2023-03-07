#include<bits/stdc++.h>
using namespace std;

void sol() {
    string s; cin>>s; 
    int n; cin>>n; 
    deque<int> dq;
    string arr; cin>>arr;
    string arr2="";
    int rev = 0;
    
    for(auto c : arr) {
        if(isdigit(c)) {
            arr2 += c;
        }
        else {
            if(!arr2.empty()) {
                dq.push_back(stoi(arr2));
                arr2 = "";
            }
        }
    }
    for(auto c : s) {
        
      if(c == 'R')
        rev = 1 - rev;
      else{
        if(dq.empty()){
            cout << "error\n";
            return;
        }
        if(!rev) dq.pop_front();
        else dq.pop_back();
      }
    }
    
      if(rev) reverse(dq.begin(), dq.end());
      
    int sz = dq.size();
    cout<<"[";
    while(sz--) {
        cout<<dq.front();
        dq.pop_front();
        if(sz != 0) cout<<",";
    }
    cout<<"]\n"; 
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) {
        sol();
    }
}