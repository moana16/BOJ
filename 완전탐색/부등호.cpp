#include<bits/stdc++.h>
using namespace std;

int K;
char arr[10];
long long MN = 0x7f7f7f7f7f7f;
long long MX = -0;

void sol(int idx, vector<int> cur) {
    if(idx == K) {
        string s;
        for(auto c : cur) s += to_string(c);
        MN = min(MN, stoll(s));
        MX = max(MX, stoll(s));

    }
    for(int i=0; i<=9; i++) {
        if(find(cur.begin(), cur.end(), i) != cur.end()) continue; //만약 해당 숫자가 존재하면 pass
        if(arr[idx] == '<') {
            if(cur[idx] < i) {
                cur.push_back(i);
                sol(idx+1, cur);
                cur.pop_back();

            }
        }
        else {
            if(cur[idx] > i) {
                cur.push_back(i);
                sol(idx+1, cur);
                cur.pop_back();

            }
        }
    }

}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>K;
    for(int i=0; i<K; i++) cin>>arr[i];

    for(int i=0; i<=9; i++) {
        vector<int> cur;
        cur.push_back(i);
        sol(0, cur);
    }
    string mx = to_string(MX);
    string mn = to_string(MN);

    if(mx.length() < K+1) mx = '0'+ mx;
    if(mn.length() < K+1) mn = '0'+ mn;
    cout<<mx<<'\n'<<mn;


}