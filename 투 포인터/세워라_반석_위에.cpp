#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    deque<int> mnDq, mxDq;
    int s=0, ans = 0;


    for(int e=0; e<N; e++) {

        while(!mxDq.empty() && v[mxDq.back()] <= v[e]) mxDq.pop_back(); // 내림차순
        mxDq.push_back(e);

        while(!mnDq.empty() && v[mnDq.back()] >= v[e]) mnDq.pop_back(); // 오름차순
        mnDq.push_back(e);

        while(!mxDq.empty() && !mnDq.empty() && v[mxDq.front()] - v[mnDq.front()] > 2) {
            s++;
            if(mxDq.front() < s) mxDq.pop_front();
            if(mnDq.front() < s) mnDq.pop_front();
        }

        ans = max(ans, e-s+1);
        
    }

    cout<<ans;

}