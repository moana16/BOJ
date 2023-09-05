#include <bits/stdc++.h>
using namespace std;
int n, w, l,ans;
queue<int> q;
int arr[1000];
//첫번째 트럭은 1초에 출발함
int main() {
    cin>>n>>w>>l;
    for(int i=0; i<n; i++) {    
        cin>>arr[i];
    }

    int weight = 0;
    ans = 0;
    for(int i=0; i<n; i++) {
        while(true) {
            if(q.size() == w) {
                weight -= q.front();
                q.pop();
            }
            if(arr[i] + weight <= l) break;
            q.push(0); //다리 빈 곳을 무게가 0인 투명트럭으로 채움
            ans++;
        }
        q.push(arr[i]);
        weight += arr[i];
        ans++;
    }
    

    
    cout<<ans + w;


}