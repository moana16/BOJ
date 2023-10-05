#include <bits/stdc++.h>
using namespace std;

//1승을 계산할 수 있다.
//k승을 계산했으면 2k와 2k+1승도 O(1)에 계산할 수 있다.
long long sol(long long a, long long b, long long c) {
    if(b == 1) return a % c; //base condition
    long long val = sol(a,b/2,c);
    val = val * val % c; //b를 2로 나누면서 두번 할 계산을 1번으로 줄였기 때문에 어쩌피 val 값은 두번 나오니까 곱해줌
    if(b%2 == 0) return val;
    return val * a % c;

}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    long long A,B,C;
    cin>>A>>B>>C;
    cout<<sol(A,B,C);


}