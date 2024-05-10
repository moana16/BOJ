#include<bits/stdc++.h>
using namespace std;

int N,M,ans = 0;
vector<int> cards;

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        cards.push_back(x);
    }
    for(int i=0; i<N-2; i++) {
        for(int j=i+1; j<M-1; j++) {
            for(int k=j+1; k<N; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if(sum == M) ans = M;
                else if(sum <= M) ans = max(ans, sum);
            }
        }
    }

    cout<<ans;
}