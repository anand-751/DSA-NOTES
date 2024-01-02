#pragma once
#include "shapes.h"

class Rectangle : public shapes {
private:
    float mLength;
    float mBreadth;

public:
    Rectangle(float length, float breadth);
};
