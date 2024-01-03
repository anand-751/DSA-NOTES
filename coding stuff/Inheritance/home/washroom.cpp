#include "washroom.h"

Washroom::Washroom(const std::string &wallPaint, int numWindows, int numOfTaps, int numOfBasins) : BaseRoom(wallPaint, numWindows), mNumOfTaps(numOfTaps), mNumOfBasins(numOfBasins){}

int Washroom::getNumOfTaps() const{
    return mNumOfTaps;
}

int Washroom::getNumOfBasins() const{
    return mNumOfBasins;

}