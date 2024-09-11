#ifndef POINTTYPE_CPP
#define POINTTYPE_CPP

#include "PointType.h"
#include <cmath>  // For sqrt and pow functions

// Function to calculate distance between two points
template <typename T>
double PointType<T>::distance(const PointType<T>& p) const {
    return std::sqrt(std::pow(x - p.x, 2) + std::pow(y - p.y, 2));
}

// Overloaded subtraction operator
template <typename T>
double PointType<T>::operator-(const PointType<T>& p) const {
    return distance(p);
}

#endif // POINTTYPE_CPP
