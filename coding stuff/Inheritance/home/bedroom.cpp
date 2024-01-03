#include "bedroom.h"

BedRoom::BedRoom(const std::string &wallPaint, int numWindows, int numFans, bool hasAc, int numBeds)
    : Room(wallPaint, numWindows, numFans, hasAc), mNumBeds(numBeds) {}

int BedRoom::getNumBeds() const{
    return mNumBeds;
}
