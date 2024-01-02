#include "circle.h"

Circle::Circle(float radius) : mRadius(radius) {
    mArea = 3.14 * mRadius * mRadius;
}