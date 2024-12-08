#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string str;
    cin>>N>>str;

    int sum = 0;
    for(auto c : str) {
        sum += c -'0';
    }
    cout<<sum;
}