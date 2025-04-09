#include<bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b) {
    char ca = a[0], cb = b[0];
    int na = stoi(a.substr(2));
    int nb = stoi(b.substr(2));

    if(ca != cb) return ca < cb;
    return na < nb;
}

int main() {
    int N; cin>>N;
    int total = N*5;

    vector<string> init(total);
    for(int i=0; i<total; i++) cin>>init[i];

    vector<string> order(init);
    sort(order.begin(), order.end(), cmp);

    stack<string> st;
    int idx = 0;

    for(int i=0; i<total; i++) {
        while(!st.empty() && st.top() == order[idx]) {
            st.pop();
            idx++;
        }
        if(init[i] == order[idx]) idx++;
        else st.push(init[i]);
    }

    while(!st.empty() && st.top() == order[idx]) {
        st.pop();
        idx++;
    }

    if(idx == total) cout<<"GOOD";
    else cout<<"BAD";
}