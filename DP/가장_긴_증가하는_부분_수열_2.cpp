#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin>>A[i];

    vector<int> LIS;

    for(auto n : A) {
        auto pos = lower_bound(LIS.begin(), LIS.end(), n);
        if(pos == LIS.end()) LIS.push_back(n);
        else *pos = n;
    }

    cout<<LIS.size();
}