#include<bits/stdc++.h>
using namespace std;

int K; 
int arr[1200];
vector<int> v[10];
void insertTree(int depth, int st, int en) {
    if(st >= en) return;
    int mid = (st + en) / 2;
    v[depth].push_back(arr[mid]);
    insertTree(depth + 1, st, mid);
    insertTree(depth + 1, mid + 1, en);
}
int main() {
    cin>>K;
    int sz = pow(2,K);
    for(int i=0; i<sz; i++) cin>>arr[i];
    insertTree(0,0,sz-1);

    for(int i=0; i<K; i++) {
        for(auto c : v[i]) {
            cout<<c<<" ";
        }
        cout<<'\n';
    }

}