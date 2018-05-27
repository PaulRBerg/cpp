#include <iostream>
#include "ackermann.cpp"

int main (int argc, const char * argv[]) {
    std::cout << "你好!\n";

    int result = ack(2, 5);
    std::cout << result << '\n';

//    for (int i = 0; i < 6; ++i) {
//        for (int j = 0; j < 6; ++j) {
//            std::cout << "ack(" << i << ", " << j << "): " << ack(i, j) << "\n";
//        }
//    }

    return 0;
}