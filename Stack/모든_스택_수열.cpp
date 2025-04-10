#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> res;

void sol(int cur, stack<int> &st, vector<int> &v) {
    if(v.size() == n) {
        res.push_back(v);
        return;
    }

    if(cur <= n) {
        st.push(cur);
        sol(cur+1, st, v);
        st.pop();
    }

    if(!st.empty()) {
        int top = st.top();
        st.pop();
        v.push_back(top);
        sol(cur, st, v);
        v.pop_back();
        st.push(top);
    }

}

int main() {
    cin>>n;

    stack<int> st;
    vector<int> v;

    sol(1, st, v);

    sort(res.begin(), res.end());

    for(auto r : res) {
        for(auto c : r) {
            cout<<c<<" ";
        }
        cout<<'\n';
    }
}