#include "living_room.h"

LivingRoom::LivingRoom(const std::string &wallPaint, int numWindows, int numFans, bool hasAc, int numOfSofas, int numOfTables) : Room(wallPaint, numWindows, numFans, hasAc), mNumOfSofas(numOfSofas), mNumOfTables(numOfTables){}

int LivingRoom::getNumOfSofas() const{
    return mNumOfSofas;
}

int LivingRoom::getNumOfTables() const{
    return mNumOfTables;
}