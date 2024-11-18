#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, N; 
    cin>>A>>B>>C>>N;

    bool flag = false;

    for(int a=0; a<N/A + 1; a++) {
        for(int b = 0; b < N/B + 1; b++) {
            for(int c = 0; c < N/C + 1; c++) {
                if(a*A + b*B + c*C == N) flag = true; 
            }
        }
    }
    if(flag) cout<<1;
    else cout<<0;
}