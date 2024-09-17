#ifndef POINTTYPE_H
#define POINTTYPE_H

#include <cmath> // For sqrt function

template <typename T>
class PointType {
private:
    T x;
    T y;

public:
    // Default constructor
    PointType() : x(0), y(0) {}

    // Constructor with parameters
    PointType(T Ux, T Uy) : x(Ux), y(Uy) {}

    // Setters
    void setX(T Ux) { x = Ux; }
    void setY(T Uy) { y = Uy; }
    void setPoint(T Ux, T Uy) { x = Ux; y = Uy; }

    // Getters
    T getX() const { return x; }
    T getY() const { return y; }

    // Calculate distance to another point
    double distanceTo(const PointType<T>& other) const {
        return std::sqrt(std::pow(static_cast<double>(x - other.x), 2) +
            std::pow(static_cast<double>(y - other.y), 2));
    }

    // Overload subtraction operator
    double operator-(const PointType<T>& other) const {
        return distanceTo(other);
    }
};

#endif // POINTTYPE_H
#pragma once
