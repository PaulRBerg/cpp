#include <iostream>

int ack(int m, int n) {
    std::cout << '('<< m << ", " << n << ")\n";
    if (m == 0) return n + 1;
    if (n == 0) return ack(m - 1, 1);
    return ack(m - 1, ack(m, n - 1));
}