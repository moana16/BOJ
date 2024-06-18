#include<bits/stdc++.h>
using namespace std;

int N,M;

void sol(int cur, vector<int> nums) {
    if(nums.size() == M) {
        for(auto n : nums) cout<<n<<" ";
        cout<<'\n';
        return;
    }
    for(int i=cur+1; i<=N; i++) {
        nums.push_back(i);
        sol(i, nums);
        nums.pop_back();
    }
}

int main() {
    cin>>N>>M;
    vector<int> nums;
    sol(0,nums);
}