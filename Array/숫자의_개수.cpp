#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long multi = 1;
    string s;
    int num[10];

    fill(num, num + 10, 0);

    for(int i=0; i<3; i++) {
        cin>>N;
        multi *= N;
    }

    s = to_string(multi);

    for(auto c : s) {
        num[c-48]++;
    }

    for(int i=0; i<10; i++) cout<<num[i]<<"\n";

}