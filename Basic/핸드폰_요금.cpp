//영식 요금제는 30초마다 10원씩 청구 y
//민식 요금제는 60초마다 15원씩 청구된다. m
#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 23;

int N;
int arr[MAX];
int y,m;

void sol() {
    for(int i=0; i<N; i++) {
        y += 10 * (arr[i]/30 +1);
        m += 15 * (arr[i]/60 +1);
    }

    if(y < m) cout<<"Y "<<y;
    else if(y == m) cout<<"Y "<<"M "<<y;
    else cout<<"M "<<m;
}
int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>arr[i];

    }
    sol();
}

//74 128
//영식 45 