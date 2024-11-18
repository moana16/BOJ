#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {return b==0 ? a : GCD(b, a%b);}

int main() {
    int N; cin>>N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin>>A[i];
    int X; cin>>X;

    vector<int> v;

    for(int i=0; i<N; i++) {
        int gcd = GCD(X, A[i]);
        if(gcd == 1) v.push_back(A[i]);
    }
    if(v.empty()) {
        cout<<0;
        return 0;
    }
    
    long long sum = accumulate(v.begin(), v.end(), 0LL);
     double average = static_cast<double>(sum) / v.size();
    cout << fixed << setprecision(6) << average << "\n";

    


}