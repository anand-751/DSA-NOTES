#include "kitchen.h"

Kitchen::Kitchen(const std::string &wallPaint, int numWindows, int numOfShelves) : Base(wallPaint, numWindows), mNumOfShelves(numOfShelves){}

int Kitchen::getNumOfShelves const{
    return mNumOfShelves;
}