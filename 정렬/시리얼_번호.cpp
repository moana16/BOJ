#include <bits/stdc++.h>
using namespace std;
vector<string> v;
vector<string> ans;

//1. 길이 비교
//2. 숫자 합 비교
//3. 알파벳 순서 사전순 비교

bool compare(string& a, string& b) {
    int len_a = a.length();
    int len_b = b.length();
    int sum_a = 0, sum_b = 0;
    if(len_a!= len_b) return len_a < len_b;
    for(int i = 0; i < len_a; i++) {
        if(isdigit(a[i])) sum_a += a[i] - '0';
        if(isdigit(b[i])) sum_b += b[i] - '0';
    }
    if(sum_a!= sum_b) return sum_a < sum_b;
    return a<b;
}
int main() {
    int n; cin>>n;
    int max_length = 0;
    for(int i=0; i<n; i++) {
        string s; cin>>s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++) cout<<v[i]<<'\n';

}