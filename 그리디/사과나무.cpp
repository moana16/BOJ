#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> trees(N);
    int sum = 0, two_count = 0;
    for(int i=0; i<N; i++) {
        cin>>trees[i];
        sum += trees[i];
        two_count += trees[i] / 2;

    }

    if(sum % 3 != 0) cout<<"NO";
    else {
        if(two_count >= sum / 3) cout<<"YES";
        else cout<<"NO"; 
    }
}
