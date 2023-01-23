#include <bits/stdc++.h>
using namespace std;

int res,min;
vector<int> v;

int main() {
    int x;

    for(int i=0; i<7; i++) {
        cin>>x;
        if(x %2 == 1) {
            res = x + res;
            v.push_back(x);
        }
    }

    if(v.size() == 0) cout<<-1;
    else {
        cout<<res<<"\n";
        cout<<*min_element(v.begin(),v.end())<<"\n";
    }


    

}