#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,M;

    cin>>N;
    vector<int> cards(N);
    for(int i=0;i<N;i++) cin>>cards[i];

    cin>>M;
    vector<int> v(M);
    for(int i=0;i<M;i++) cin>>v[i];

    sort(cards.begin(), cards.end());

    for(auto c : v) {
        if(binary_search(cards.begin(), cards.end(), c)) cout<<1<<" ";
        else cout<<0<<" ";
    }

}