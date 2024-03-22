#include<bits/stdc++.h>
using namespace std;

long long N;
vector<long long> path;
vector<long long> price;
long long ans = 0;

int main() {
    cin>>N;
    long long x;
    for(int i=1; i<N; i++) {
        cin>>x;
        path.push_back(x);
    }
    for(int i=0; i<N-1; i++) { //어쩌피 마지막은 상관이 없으니까
        cin>>x;
        price.push_back(x);
    }

    for(int i=0; i<N; i++) {
        long long flag = -1;
        for(int j=i+1; j<N; j++) {
            if(price[i] > price[j]) {
                flag = j;
                break;
            } 
        }
        if(flag == -1) {
            for(int k=i; k<=N; k++) {
                ans += price[i] * path[k];
            }
            break;
        }
        else {
            for(int k=i; k<=flag-1; k++) {
                ans += price[i] * path[k];
            }
            i = flag-1;
        }

    }

    cout<<ans;


}