#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> v;

void sol(ll num, int last) {

    for(int i=0; i<last; i++) {
        ll new_num = num * 10 + i;
        v.push_back(new_num);
        sol(new_num, i);
    }


}

int main() {
    int N; cin>>N;

    for(int i=0; i<10; i++) {
        v.push_back(i);
        sol(i, i);
    }

    sort(v.begin(), v.end());

    if(N <= v.size()) cout<<v[N-1];
    else cout<<-1;
}
