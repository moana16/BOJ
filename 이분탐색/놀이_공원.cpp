#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N,M; 
vector<int> v;

int sol() {

    ll low = 0;
    ll high =*max_element(v.begin(), v.end()) * N; //최악의 경우 가장 오래걸리는 놀이 기구만을 N번 탑승한 경우
    ll res = 0;

    while(low <= high) {
        ll mid = (low + high) / 2;
        ll kids = M; //초기에 모든 놀이기구가 비었기 때문에

        for(int i=0; i<M; i++) { //각 놀이기구가 mid 시간 동안 몇명의 아이들을 태울 수 있는지 계산
            kids += mid / v[i];
        }

        if(kids >= N) {
            res = mid;
            high = mid - 1;
        }else low = mid + 1;
    }

    ll k = M;
    for(auto t : v) { //res 시간 직전까지 탑승한 아이들의 수 계산
        k += (res - 1) / t;
    }

    for(int i=0; i<M; i++) { //놀이기구 순회하면서 res 시간에 놀이기구가 비었는지 확인
        if(res % v[i] == 0) k++; //놀이기구 비어있다면 아이 탑승
        if(k == N) return i+1; //그 아이가 N번째 아이라면 놀이기구 번호 반환
    }
    return -1;


}

int main() {
    cin>>N>>M;

    for(int i=0; i<M; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    if(N <= M) {
        cout<<N;
        return 0;
    }

    
    cout<<sol();
}