#include "PointType.h"
#include "CircleType.h"
#include "CylinderType.h"

int main() {
    // Create points
    PointType<int> center(0, 0);
    PointType<int> circumferencePoint(3, 0);

    // Create a circle
    CircleType<int> circle(center, circumferencePoint);
    circle.print();

    // Create a cylinder
    CylinderType<int> cylinder(center, circumferencePoint, 5);
    cylinder.print();

    return 0;
}
