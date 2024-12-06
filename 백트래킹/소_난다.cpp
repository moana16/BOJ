#include<bits/stdc++.h>
using namespace std;

int N,M;
bool isPrime[2000001], visited[13];
vector<int> weights;
set<int> ans;

void sol(int cnt,int total) {
    if(cnt == M) {
        if(isPrime[total]) ans.insert(total);
        return;
    }

    for(int i=0; i<N; i++) {
        if(visited[i]) continue;
        visited[i] = true;
        sol(cnt+1, total + weights[i]);
        visited[i] = false;
    }

}


int main() {
    cin>>N>>M;
    weights.resize(N);

    for(int i=0; i<N; i++) cin>>weights[i];

    memset(isPrime, true, sizeof(isPrime));
    memset(visited, false, sizeof(visited));

    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i<=100000; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<=1000000; j+= i) {
                isPrime[j] = false;
            }
        }
    }

    sol(0, 0);
    if(ans.empty()) {
        cout<<-1;
        return 0;
    }
    for(auto a : ans) cout<<a<<" ";
}