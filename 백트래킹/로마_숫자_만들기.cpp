#include<bits/stdc++.h>
using namespace std;

int N;
set<int> s;
int n[4] = {1,5,10,50};

void sol(int cnt, int i, int total) {
    ios::sync_with_stdio(false); cin.tie(0);

    if(cnt == N) {
        s.insert(total);
        return;
    }
    for(int x = i; x<4; x++) {
        sol(cnt+1, x, total + n[x]);
    }
}

int main() {
    cin >> N;
    sol(0,0, 0);
    cout << s.size();
}
