#include<bits/stdc++.h>
using namespace std;

int N,M;
vector<int> v;

bool sol(int mid) {
    long long students = 0;
    for(auto c : v) {
        students += c/mid;
        if(c % mid != 0) students++;
    }
    return students <= N;
}
int main() {
    cin>>N>>M;
    for(int i=0; i<M; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    int low = 1;
    int high = *max_element(v.begin(), v.end());
    int res = high;


    while(low <= high) {
        int mid = (low + high) / 2;

        if(sol(mid)) {
            res = mid;
            high = mid-1;
        }
        else low = mid+1;

    }
    cout<<res;

    



}