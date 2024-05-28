#include<bits/stdc++.h>
using namespace std;

int N;
int ans = INT_MAX;
vector<pair<int,int>> ingredients;

void sol(int idx, int sour, int bitter, bool used) {

    if(idx == N) {
        if(used) {
            ans = min(ans, abs(sour-bitter));
            
        }
        return;
    }
    sol(idx+1, sour, bitter, used);
    sol(idx+1, sour * ingredients[idx].first, bitter + ingredients[idx].second, true);
}

int main() {

    cin>>N;
    for(int i=0; i<N; i++) {
        int x,y; cin>>x>>y;
        ingredients.push_back({x,y});
    }

    sol(0,1,0,false);

    cout<<ans;
}