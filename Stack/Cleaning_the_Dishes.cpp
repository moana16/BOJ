#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    stack<int> init, cleaned, dried;
    for(int i=N; i>=1; i--) {
        init.push(i);
    }

    int c,d;
    while(cin>>c>>d) {
        if(c == 1) { // clean
            while(d--) {
                cleaned.push(init.top());
                init.pop();
            }
        }else { // dry
            while(d--) {
                dried.push(cleaned.top());
                cleaned.pop();
            }

        }
    }

    while(!dried.empty()) {
        cout<<dried.top()<<'\n';
        dried.pop();
    }
}