#include<bits/stdc++.h>
using namespace std;

int alpha[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
vector<int> num;

int main() {
    string a, b;
    cin>>a;
    cin>>b;
    for(int i=0; i<a.length(); i++) {
        int x = a[i] - 'A';
        int y = b[i] - 'A';
        num.push_back(alpha[x]);
        num.push_back(alpha[y]);
    }
    int sz = num.size();
    while(true)
    {   
        vector<int> v;
        for(int i=0; i<sz-1; i++) {
            v.push_back((num[i]+num[i+1])%10);
        }
        num = v;
        sz--;

        if(num.size() == 2) break;
    }
    cout<<num[0]<<num[1]<<'\n';
}