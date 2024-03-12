#include<bits/stdc++.h>
using namespace std;

int N;
int mat[103][103];

int main() {
    cin>>N;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>mat[i][j];
        }
    }

    for(int k=0; k<N; k++) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(mat[i][j] == 0) {
                    if(mat[i][k] == 1 && mat[k][j] == 1) mat[i][j] = 1;
                    else mat[i][j] = 0;
                }
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
}