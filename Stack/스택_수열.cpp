#include <bits/stdc++.h>
using namespace std;

vector<char> str;
stack<int> s;
int cnt = 1;

int main() {
    int m; cin>>m;
    for(int i=0; i<m; i++) {
        int n; cin>>n;
        while(cnt <= n) {
            s.push(cnt);
            str.push_back('+');
            cnt++;
        
        }
        if(s.top() == n) {
            s.pop();
            str.push_back('-');
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0; i<str.size(); i++) {
        cout<<str[i]<<"\n";
    }
}