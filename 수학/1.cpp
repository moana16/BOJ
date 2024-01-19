#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int num = 0, length = 0;

        do {
            num = (num * 10 + 1) % n;
            length++; 
        }while (num != 0);

        cout<<length<<'\n';
        
        
    }
}