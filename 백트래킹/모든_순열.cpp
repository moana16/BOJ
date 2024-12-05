#include<bits/stdc++.h>
using namespace std;
bool visited[10];

void sol(int cnt, int N, vector<int>& nums) {
    if(cnt == N) {
        for(auto n : nums) cout<<n<<" ";
        cout<<'\n';
        return;
    }

    for(int i=1; i<=N; i++) {
        if(visited[i]) continue;

        nums.push_back(i);
        visited[i] = true;
        sol(cnt+1, N, nums);
        nums.pop_back();
        visited[i] = false;
    }
}

int main() {
    int N; cin>>N;
    memset(visited, false, sizeof(visited));

    vector<int> nums;
    sol(0, N, nums);
}