#pragma once
#include "circle.h"
#include "rectangle.h"
#include <vector>

class shapesCanvas {
private:
    std::vector<Circle> c1;
    std::vector<Rectangle> r1;

public:
    void addShape(const Circle& circle);
    void addShape(const Rectangle& rectangle);
    int countCircles() const;
    int countRectangles() const;
};
