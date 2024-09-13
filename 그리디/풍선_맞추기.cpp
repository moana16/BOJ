#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int N;  cin>>N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    unordered_map<int,int> arrows;
    int cnt = 0;

    for(int i=0; i<N; i++) {
        int height = v[i];

        if(arrows[height] > 0) {
            arrows[height]--;
            arrows[height - 1]++;
        }
        else {
            cnt++;
            arrows[height-1]++;
        }
    }

    cout<<cnt;

}