


#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "shapesCanvas.h"

int main() {
    Circle circle(5.0);
    Rectangle rectangle(3.0, 4.0);

    shapesCanvas canvas;
    canvas.addShape(circle);
    canvas.addShape(rectangle);

    std::cout << "Circle Area: " << circle.getArea() << std::endl;
    std::cout << "Rectangle Area: " << rectangle.getArea() << std::endl;

    std::cout << "Number of Circles in Canvas: " << canvas.countCircles() << std::endl;
    std::cout << "Number of Rectangles in Canvas: " << canvas.countRectangles() << std::endl;

    Circle circle1(6.0);
    Rectangle rectangle1(6.0, 4.0);

    canvas.addShape(circle1);
    canvas.addShape(rectangle1);

    std::cout << "Circle Area: " << circle1.getArea() << std::endl;
    std::cout << "Rectangle Area: " << rectangle1.getArea() << std::endl;

    std::cout << "Number of Circles in Canvas: " << canvas.countCircles() << std::endl;
    std::cout << "Number of Rectangles in Canvas: " << canvas.countRectangles() << std::endl;

    return 0;
}
