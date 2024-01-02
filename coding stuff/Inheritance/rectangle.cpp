#include "rectangle.h"

Rectangle::Rectangle(float length, float breadth) : mLength(length), mBreadth(breadth) {
    mArea = mLength * mBreadth;
}
