#include <iostream>
using namespace std;


int main() {
    while (true) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0)
            break;

        if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
            cout << "right\n";
        else
            cout << "wrong\n";
    }

    return 0;
}
