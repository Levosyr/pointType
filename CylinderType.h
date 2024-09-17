#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include "CircleType.h"
#include <iostream>

template <typename T>
class CylinderType : public CircleType<T> {
private:
    double height;

public:
    // Constructors
    CylinderType() : CircleType<T>(), height(0) {}
    CylinderType(PointType<T> c, PointType<T> p, double h) : CircleType<T>(c, p), height(h) {}

    // Setters
    void setHeight(double h) { height = h; }
    void setCenter(PointType<T> c) { CircleType<T>::setCenter(c); }
    void setCircumferencePoint(PointType<T> p) { CircleType<T>::setCircumferencePoint(p); }

    // Getters
    double getHeight() const { return height; }

    // Calculate volume
    double calculateVolume() const {
        return CircleType<T>::getArea() * height;
    }

    // Calculate surface area
    double calculateSurfaceArea() const {
        double radius = CircleType<T>::getRadius();
        return 2 * CircleType<T>::getArea() + 2 * M_PI * radius * height;
    }

    // Print properties
    void print() const {
        CircleType<T>::print();
        std::cout << "Height: " << height << std::endl;
        std::cout << "Volume: " << calculateVolume() << std::endl;
        std::cout << "Surface Area: " << calculateSurfaceArea() << std::endl;
    }
};

#endif // CYLINDERTYPE_H
#pragma once
