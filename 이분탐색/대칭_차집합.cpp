#include<bits/stdc++.h>
using namespace std;

int main() {
    int A,B; cin>>A>>B;
    set<int> s;

    for(int i=0; i<A; i++) {
        int x; cin>>x;
        s.insert(x);
    }
    for(int i=0; i<B; i++) {
        int x; cin>>x;
        s.insert(x);
    }

    int total = A + B - s.size();

    cout<<A-total + B - total;
}