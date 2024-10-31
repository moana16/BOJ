#include<bits/stdc++.h>
using namespace std;

int main() {
    int cost; cin>>cost;
    vector<int> v(14);

    for(int i=0; i<14; i++) cin>>v[i];

    // 준현이 방법
    int j = cost;
    int stocks_j = 0;
    for(int i=0; i<13; i++) {
        if(j > 0 && v[i] <= j) {
            int n = j / v[i];
            stocks_j += n;
            j -= n * v[i];
        }
    }

    int total_j = j + v[13] * stocks_j;


    // 성민이 방법
    int s = cost;
    int stocks_s = 0;

    int cnt = 0;
    for(int i=3; i<13; i++) {
        if(v[i-3] < v[i-2] && v[i-2] < v[i-1] && v[i-1] < v[i] ) {
            if(stocks_s > 0) {
                s += stocks_s * v[i];
                stocks_s = 0;
            }
        }
        else if(v[i-3] > v[i-2] && v[i-2] > v[i-1] && v[i-1] > v[i]){
            if( s >0 && v[i] <= s){
                int n = s / v[i];
                stocks_s += n;
                s -= n*v[i];
            }
        }
    } 
    int total_s = s + v[13] * stocks_s;

    if(total_s == total_j) cout<<"SAMESAME";
    else if(total_j > total_s) cout<<"BNP";
    else cout<<"TIMING";


}