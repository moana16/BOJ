#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int N;
ll MIN = LLONG_MAX , MAX = LLONG_MIN;
vector<int> nums;
int oper[4];

void sol(int cur, ll total) {
    if(cur == N-1) {
        MIN = min(total, MIN);
        MAX = max(total, MAX);
        return;
    }

    for(int i=0; i<4; i++) {
        if(oper[i] == 0) continue;
        oper[i]--;
        if(i == 0) sol(cur+1, total + nums[cur+1]);
        else if(i == 1) sol(cur+1, total - nums[cur+1]);
        else if(i == 2) sol(cur+1, total * nums[cur+1]);
        else sol(cur+1, total / nums[cur+1]);
        oper[i]++;
    }
}

int main() {

    cin>>N;
    nums.resize(N);
    for(int i=0; i<N; i++) cin>>nums[i];
    for(int i=0; i<4; i++) cin>>oper[i];

    sol(0, nums[0]);

    cout<<MAX<<'\n'<<MIN;
}