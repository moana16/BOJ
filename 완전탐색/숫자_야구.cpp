#include<bits/stdc++.h>
using namespace std;

int N, ans = 0;
vector<tuple<int,int,int>> v;

void sol(int cur, string num) {
    if(cur == N) {
        ans++;
        return;
    }

    int x = get<0>(v[cur]);
    int y = get<1>(v[cur]);
    int z = get<2>(v[cur]);

    string comp = to_string(x);
    int strike = 0, ball= 0;

    for(int i=0; i<3; i++) {
        if(num[i] == comp[i]) strike++;
        else if(num[i] != comp[i] && comp.find(num[i]) != string::npos) ball++;
    }

    if(y == strike && z == ball) {
        sol(cur+1, num);
    }
    else return;

}
int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back({x,y,z});
    }

    for(int i=1; i<=9; i++) {
        for(int j=1; j<=9; j++) {
            for(int k=1; k<=9; k++) {
                if(i == j || j == k || i == k) continue;
                string num;
                num += to_string(i);
                num += to_string(j);
                num += to_string(k);
                sol(0, num);
            }
        }
    }

    cout<<ans;

}