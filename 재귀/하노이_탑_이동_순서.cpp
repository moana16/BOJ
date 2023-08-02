#include <bits/stdc++.h>
using namespace std;

void sol(int start, int end, int n) {

    if(n == 1) {
        cout<<start<<" "<<end<<'\n';
        return;
    }

    sol(start, 6-start-end, n-1); //2번으로 n-1원판을 모두 옮기는 재귀
    cout<<start<<" "<<end<<'\n'; //n번 원판을 1번에서 3번으로 모두 옮김
    sol(6-start-end, end, n-1); //2번에서 3으로 n-1원판을 모두 옮기는 재귕...
}

int main() {
    int n; cin>>n;
    cout<< (1<<n)-1 <<'\n';
    sol(1,3,n);
}