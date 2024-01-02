#include "bedroom.h"
#include "base.h"

BedRoom::BedRoom(const std::string &wallPaint, int numWindows, int numFans, bool hasAc, int numBeds) : Base(wallPaint, numWindows), Room(numFans ,hasAc), mNumBeds(numBeds){}

int BedRoom::getNumBeds() const{
    return mNumBeds;
}

