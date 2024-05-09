#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, C, M;
    cin >> N >> C >> M;

    vector<tuple<int, int, int>> v;
    for (int i = 0; i < M; i++) {
        int s, e, b;
        cin >> s >> e >> b;
        v.push_back(make_tuple(e, s, b));
    }
    sort(v.begin(), v.end());

    int ans = 0;
    vector<int> capacity(N+1, C);

    for (const auto &c : v) {
        int end = get<0>(c);
        int start = get<1>(c);
        int boxes = get<2>(c);

        int max_boxes = C;
        for (int i = start; i < end; i++) {
            max_boxes = min(max_boxes, capacity[i]);
        }

        int moved_boxes = min(boxes, max_boxes);
        ans += moved_boxes;

        for (int i = start; i < end; i++) {
            capacity[i] -= moved_boxes;
        }
    }

    cout << ans;

}