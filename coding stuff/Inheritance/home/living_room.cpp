#include "living_room.h"

Living_room::Living_room(const std::string &wallPaint, int numWindows, int numFans, bool hasAc, int numOfSofas, int numOfTables) : Base(wallPaint, numWindows), Room(numFans ,hasAc), mNumOfSofas(numOfSofas)
, mNumOfTables(numOfTables) {}

int Living_room::getNumShelves() const{
    return mNumShelves;
}