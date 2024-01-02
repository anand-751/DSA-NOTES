#include "washroom.h"

Washroom::Washroom(const std::string &wallPaint, int numWindows, int numOfTaps, int numOfBasins) : Base(wallPaint, numWindows), mNumOfTaps(numOfTaps), mNumOfSinks(numOfBasins){}

int Washroom::getNumOfTaps() const{
    return mNumOfTaps;
}

int Washroom::getNumOfBasins() const{
    return mNumOfSinks;

}