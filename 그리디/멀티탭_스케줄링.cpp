#include<bits/stdc++.h>
using namespace std;

int arr[102];
bool power[102];
int ans = 0;


int main() {
    int N,K;
    cin>>N>>K;
    for(int i=1; i<=K; i++) cin>>arr[i];

    int cnt = 0; //멀티탭에 꽂혀있는 전기용품 개수
    for(int i=1; i<=K; i++) {
        int cur = arr[i];
        if(power[cur]) continue; // 이미 꽂혀 있으면 패스

        if(cnt < N) {
            power[cur] = true;
            cnt++;
        }

        else {
            vector<pair<int,int>> v;
            for(int x=1; x<=K; x++) {
                if(!power[x]) continue; //멀티탭에 있는 놈중에 다음 순서가 있는지 확인해야 하므로..
                bool vis = false;
                for(int y=i+1; y<=K; y++) { //순서 중에 확인..
                    if(arr[y] == x) { //만약 현재 멀티탭에 있는데 다음 순서에도 있다
                        v.push_back({y,x}); //넣어줌
                        vis = true;
                        break;
                    }
                }
                if(!vis) v.push_back({K+1,x}); //만약 현재 멀티탭에 있는 놈중에 다음 순서가 있는 놈이 없다..
            }
            sort(v.begin(), v.end(), greater<pair<int,int>>()); //가장 가까이 있는 놈을 알아내기 위해..
            int target = v[0].second; //타켓은 바로 0번째 인덱스 즉, 가장 가까운 놈
            power[target] = false;
            ans++;
            power[cur] = true;
        }
    }
    
    cout<<ans;
    
}