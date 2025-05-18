#include <bits/stdc++.h>
using namespace std;

int main() {
    string j, d;
    cin >> j >> d;

    int a_count_j = count(j.begin(), j.end(), 'a');
    int a_count_d = count(d.begin(), d.end(), 'a');

    if (a_count_j >= a_count_d) cout << "go";
    else cout << "no";

    return 0;
}
