#include "shapesCanvas.h"

void shapesCanvas::addShape(const Circle& circle) {
    c1.push_back(circle);
}

void shapesCanvas::addShape(const Rectangle& rectangle) {
    r1.push_back(rectangle);
}

int shapesCanvas::countCircles() const {
    return c1.size();
}

int shapesCanvas::countRectangles() const {
    return r1.size();
}
