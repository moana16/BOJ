#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    // n이 0일 경우 바로 0 출력
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll left = 0, right = n;
    ll answer = 0;

    while (left <= right) {
        ll mid = (left + right) / 2;

        // mid가 0이 아닌 경우에만 n / mid를 계산하여 비교
        if (mid != 0 && mid <= n / mid) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // 정수 제곱근보다 큰 첫 번째 값을 출력
    if (answer * answer < n) answer++;

    cout << answer << endl;
    return 0;
}
