#include<bits/stdc++.h>
using namespace std;

int n,k;
set<string> st;
vector<int> cards;

void sol(vector<pair<int,int>> arr) {
    if(arr.size() == k) {
        string str="";
        for(auto c : arr) {
            str += to_string(c.second);
        }
        st.insert(str);
        return;
    }

    for(int i=0; i<n; i++) {
        bool flag = false;
        for(auto c : arr) {
            if(c.first == i) flag = true;
        }
        if(!flag) {
            vector<pair<int,int>> tmp = arr;
            tmp.push_back({i, cards[i]});
            sol(tmp);

        }
    }
}

int main() {
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        cards.push_back(x);
    }

    for(int i=0; i<n; i++) {
        vector<pair<int,int>> arr;
        arr.push_back({i, cards[i]});
        sol(arr);
    }
    
    
    cout<<st.size();

}