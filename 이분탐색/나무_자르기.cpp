#include <bits/stdc++.h>
using namespace std;

int N;
long long M;
int tree[1000003];


bool solve(int x) {
    long long sum = 0;
    for(int i=0; i<N; i++) {
        if(tree[i] - x > 0) sum += tree[i]-x;
        
    }
    return sum >= M;

}


int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) cin>>tree[i];

    sort(tree,tree+N);
    int st = 0;
    int en = tree[N-1];

    while(st < en) {
        int mid = (st+en+1) / 2;
        if(solve(mid)) {
            st = mid;
        }else en = mid-1;
    }
    cout<<st;


}