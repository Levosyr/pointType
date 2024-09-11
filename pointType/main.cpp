#include <iostream>
#include "PointType.h"

int main() {
    PointType<int> p1(2, 3);
    PointType<int> p2(5, 7);

    std::cout << "Distance between p1 and p2: " << p1 - p2 << std::endl;

    return 0;
}
