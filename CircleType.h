#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include "PointType.h"
#include <cmath> // For M_PI
#include <iostream>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

template <typename T>
class CircleType {
private:
    PointType<T> center;
    PointType<T> circumferencePoint;

public:
    // Constructors
    CircleType() : center(), circumferencePoint() {}
    CircleType(PointType<T> c, PointType<T> p) : center(c), circumferencePoint(p) {}

    // Setters
    void setCenter(PointType<T> c) { center = c; }
    void setCircumferencePoint(PointType<T> p) { circumferencePoint = p; }

    // Getters
    double getRadius() const {
        return center - circumferencePoint;
    }

    double getArea() const {
        double radius = getRadius();
        return M_PI * radius * radius;
    }

    // Print function
    void print() const {
        std::cout << "Radius: " << getRadius() << std::endl;
        std::cout << "Area: " << getArea() << std::endl;
    }
};

#endif // CIRCLETYPE_H
#pragma once
