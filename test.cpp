#include<bits/stdc++.h>
using namespace std;

int N, t;
string s;
vector<string> ret;
set<string> st;

void go(int idx, int depth, string target, queue<pair<char, int>> q) {
 // cout << "D: " <<depth << ", " << "i: " << idx << "\n";
  
  if (idx == N) {
    
    while(q.size()) {
      target += q.front().first;
      q.pop();
    }

    st.insert(target);

    return;
  }

  string tmp = target;
  tmp += s[idx];
  // 대기하던 것들 pop
  while(q.size()) {
    if (depth - q.front().second == t) {
      target += q.front().first;
      tmp += q.front().first;
      q.pop();
    } else {
      break;
    }
  }

  // 지연 X
  go(idx + 1, depth + 1, tmp, q);

  // 지연
  q.push({s[idx], depth});
  go(idx + 1, depth + 1, target, q);
}

int main() {
  cin >> s >> t;
  N = s.size();

  queue<pair<char, int>> q;
  go(0, 0, "", q);

  vector<string> ans(st.begin(), st.end());
  for(auto c : ans) cout<<c<<'\n';
}