#include <bits/stdc++.h>
using namespace std;

int N,M;
int card[500005];

int main() {

    ios::sync_with_stdio(0); cin.tie(0);
    
    cin>>N;
    for(int i=0;i<N;i++) {
        cin>>card[i];
    }
    sort(card, card+N); 
    cin>>M;
    while (M--)
    {
        int x; cin>>x;
        cout<<binary_search(card,card+N,x)<<" ";
    }

}