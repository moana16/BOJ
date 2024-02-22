#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll X,Y;
    cin>>X>>Y;
    ll Z =  100 * Y / X;

    if(Z >= 99) {
        cout<<-1;
        return 0;
    }

    ll low = 0;
    ll high = 1000000000;
    ll result = 1000000000;

    while(low <= high) {
        ll mid = (low + high) / 2;
        ll nZ = 100 * (Y + mid) / (X + mid);

        if(nZ > Z) {
            high = mid - 1;
            result = mid;
        }
        else {
            low = mid + 1;
        }
    }
    cout<<result;
}