#include <bits/stdc++.h>
using namespace std;

int main() {
    int k[9];
    int sum;
    int res[7];
    int j=0;

    for(int i=0; i<9; i++) {
        cin>>k[i];
    }

    for(int a=0; a<8; a++) {
        sum = 0;
        
        for(int b=a+1; b<9; b++) {
            sum = 0;

            for(int c=0, i=0; c<9; c++) if(c!=a && c!=b) res[i++] = k[c];
            for(int i=0; i<7; i++) sum += res[i];

            if(sum ==100 ) break;
        }
        if(sum == 100) break;
    }

    sort(res, res+7);
    

    for(int i=0; i<7; i++) cout<<res[i]<<'\n';



}