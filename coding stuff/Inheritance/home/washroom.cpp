#include "washroom.h"

Washroom::Washroom(const std::string &wallPaint, int numWindows, int numOfTaps, int numOfSinks) : Base(wallPaint, numWindows), mNumOfTaps(numOfTaps), mNumOfSinks(numOfSinks){}

int Washroom::getNumOfTaps() const{
    return mNumOfTaps;
}

int Washroom::getNumOfSinks() const{
    return mNumOfSinks;

}