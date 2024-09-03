#include <bits/stdc++.h>
using namespace std;

int n, cnt = 1;
vector<char> ans;
stack<int> st;
int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;

        while(cnt <= x) {
            st.push(cnt);
            ans.push_back('+');
            cnt++;
        }
        if(st.top() == x) {
            st.pop();
            ans.push_back('-');
        }
        else {
            cout<<"NO";
            return 0;
        }
    }

    for(auto c : ans) cout<<c<<'\n';
}