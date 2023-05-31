#include <iostream>

int main() {
    while (true) {
        int x, y, z;
        std::cin >> x >> y >> z;
        if (x == 0)
            break;

        if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
            std::cout << "right\n";
        else
            std::cout << "wrong\n";
    }

    return 0;
}
