#include <iostream>
#include <vector>

using namespace std;

class shapes {
protected:
    float mArea;

public:
    float getArea() const {
        return mArea;
    }
};

class Rectangle : public shapes {
private:
    float mLength;
    float mBreadth;

public:
    Rectangle(float length, float breadth) : mLength(length), mBreadth(breadth) {}

    float calculateArea() {
        mArea = mLength * mBreadth;
        return mArea;
    }
};

class Circle : public shapes {
private:
    float mRadius;

public:
    Circle(float radius) : mRadius(radius) {}

    float calculateArea() {
        mArea = 3.14 * mRadius * mRadius;
        return mArea;
    }
};

class shapesCanvas {
private:
    vector<Circle> c1;
    vector<Rectangle> r1;

public:
    void addShape(const Circle &circle) {
        c1.push_back(circle);
    }

    void addShape(const Rectangle &rectangle) {
        r1.push_back(rectangle);
    }

    int countCircles() const {
        return c1.size();
    }

    int countRectangles() const {
        return r1.size();
    }
};

int main() {

    Circle circle(5.0);
    Rectangle rectangle(3.0, 4.0);

    shapesCanvas canvas;
    canvas.addShape(circle);
    canvas.addShape(rectangle);

    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;

    cout << "Number of Circles in Canvas: " << canvas.countCircles() << endl;
    cout << "Number of Circles in Canvas: " << canvas.countRectangles() << endl;

    Circle circle1(6.0);
    Rectangle rectangle1(6.0, 4.0);

    canvas.addShape(circle);
    canvas.addShape(rectangle);

    cout << "Circle Area: " << circle1.calculateArea() << endl;
    cout << "Rectangle Area: " << rectangle1.calculateArea() << endl;

    cout << "Number of Circles in Canvas: " << canvas.countCircles() << endl;
    cout << "Number of Circles in Canvas: " << canvas.countRectangles() << endl;


    return 0;
}