#include <bits/stdc++.h>
using namespace std;

int card[23];
int a,b;

void swqp(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void sol(int a, int b) {
    if(b-a <= 1) {
        swap(card[a],card[b]);
        
    }
    else {
        for(int i = 0; i<= (b-a)/2; i++) {
        swqp(card[a+i], card[b-i]);
    }
    }
    
}

int main() { 
    for(int i=1; i<=20; i++) {
        card[i] = i;
    }
    for(int i=0; i<10; i++) {
        cin>>a>>b;
        sol(a,b);
    
    }

    for(int i=1; i<=20; i++) {
        cout<<card[i]<<" ";
    }

}