#include<bits/stdc++.h>
using namespace std;

int N,M;

void sol(vector<int> nums, int cur) {
    if(nums.size ()== M) {
        for(auto c : nums) cout<<c<<" ";
        cout<<"\n";
        return;
    }

    for(int i=1; i<=N; i++) {
        if(find(nums.begin(), nums.end(), i) == nums.end()) {
            nums.push_back(i);
            sol(nums, i);
            nums.pop_back();
        }
    }
}


int main() {
    cin>>N>>M;
    vector<int> nums;
    sol(nums, 0);
}