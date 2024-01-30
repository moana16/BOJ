#include<bits/stdc++.h>
using namespace std;

int N,C;
map<int,int> m;
vector<pair<int,int>> v;
vector<int> order;
bool comp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second > b.second;
}
int main() {
    cin>>N>>C;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(order.end()==(find(order.begin(), order.end(), x))) order.push_back(x);
        m[x]++;
    }
    for(auto n : order) {
        v.push_back({n, m[n]});
    }
    stable_sort(v.begin(), v.end(), comp);

    for(auto c : v) {
        while(c.second--) cout<<c.first<<" ";
    }

}