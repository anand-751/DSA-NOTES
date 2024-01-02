#include "room.h"

Room::Room(const std::string &wallPaint, int numWindows, int numFans, bool hasAc) : Base(wallPaint, numWindows), mNumFans(numFans), mHasAc(hasAc) {}

int Room::getNumFans() const
{
    return mNumFans;
}
bool Room::hasAc() const
{
    return mHasAc;
}
