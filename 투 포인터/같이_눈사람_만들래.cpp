#include<bits/stdc++.h>
using namespace std;

int N, ans = 0x3f3f3f3f;
vector<int> v;

int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N-3; i++) {
        for (int j = i+3; j < N; j++) { 
            int left = i + 1; 
            int right = j - 1; 

            while (left < right) { 
                int height1 = v[i] + v[j]; 
                int height2 = v[left] + v[right]; 
                int res = height2 - height1;
                ans = min(ans, abs(res));

                
                if (res> 0) {
                    right--; 
                } else {
                    left++; 
                }
            }
        }
    }

    cout<<ans;
    

}