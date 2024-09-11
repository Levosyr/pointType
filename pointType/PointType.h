#ifndef POINTTYPE_H
#define POINTTYPE_H

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

    // Getters
    T getX() const { return x; }
    T getY() const { return y; }

    // Calculate distance between two points
    double distance(const PointType<T>& p) const;

    // Overloaded operator- to return the distance between two points
    double operator-(const PointType<T>& p) const;
};

#include "PointType.cpp" // Include the template implementation

#endif // POINTTYPE_H
