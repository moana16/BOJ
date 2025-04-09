#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    stack<int> st;
    long long cnt = 0;

    for(int i=1; i<=N; i++){
        int h; cin>>h;

        while(!st.empty() && st.top() <= h) {
            st.pop();
        }

        cnt += st.size();
        st.push(h);
    }
    cout<<cnt;
}