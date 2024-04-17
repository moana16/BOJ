#include<bits/stdc++.h>
using namespace std;
typedef long double ld;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int alpha[26];
    int N; cin>>N;
    string exp; cin>>exp;
    vector<char> v;
    
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        alpha[i] = x;
        
    }
    ld ans = 0;

    stack<ld> st;

    for(auto c : exp) {
        if(c == '*') {
            auto x = st.top();
            st.pop();
            auto y = st.top();
            st.pop();
            ans = y * x;
            st.push(ans);
        }
        else if(c == '-') {
            auto x = st.top();
            st.pop();
            auto y = st.top();
            st.pop();
            ans = y - x;
            st.push(ans);

        }
        else if(c == '/') {
            auto x = st.top();
            st.pop();
            auto y = st.top();
            st.pop();
            ans = y / x;
            st.push(ans);
        }

        else if(c == '+') {
            auto x = st.top();
            st.pop();
            auto y = st.top();
            st.pop();
            ans = y + x;
            st.push(ans);
        }

        else {
            st.push(alpha[c - 'A']);
        }
    }


    cout.precision(2);
    cout<<fixed<<setprecision(2)<<st.top();


}