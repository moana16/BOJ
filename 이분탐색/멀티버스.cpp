#include <bits/stdc++.h>
using namespace std;

int M,N;
int arr[103][10004];
int uni[103][10004];
int ans = 0;

bool isSame(int x[], int y[]) {
    for(int i=0; i<N; i++) {
        if(x[i] != y[i]) return false;
    }
    return true;

}

void sol(int n, vector<int> v) { //압축하는 함수
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0; i<N; i++) {
        arr[n][i] = lower_bound(v.begin(),v.end(),arr[n][i])-v.end();
    }

}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);


    cin >> M >> N;
    for(int i=0; i<M; i++) {
        vector<int> v;
        for(int j=0; j<N; j++) {
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
            
        }
        sol(i, v);
        
    }

    for(int i=0; i<M; i++) {
        for(int j=i+1; j<M; j++) {
            if(isSame(arr[i], arr[j])) ans++;
        }
    }
    cout<<ans;

}