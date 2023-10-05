#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<char> v;
char arr[20];
vector <char> ans;
vector<char> vowel = {'a','e','i','o','u'};

bool aeiou(char t) {
    return t=='a' || t=='e' || t=='i' || t=='o' || t=='u';
}

void sol(int k) {
    int vnum = 0; //모음
    int cnum = 0; //자음
    if(k == n) {
        for(int i=0; i<m; i++) {
            if(aeiou(ans[i])) vnum++;
            else cnum++;
        }
        if(vnum >= 1 && cnum >= 2 ) {
            for(int i=0; i<n; i++) cout<<ans[i];
            cout<<'\n';
        }
        
        return;
    }
    for(int i=0; i<m; i++) {
        if(k > 0 && ans[k-1] >= v[i]) continue;
        ans.push_back(v[i]);
        sol(k+1);
        ans.pop_back();
    }
}
int main() {
    cin>>n>>m;
    for(int i=0; i<m; i++) {
        char x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    sol(0);

}
//a c i s t w