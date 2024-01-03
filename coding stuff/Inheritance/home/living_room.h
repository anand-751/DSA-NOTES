#pragma once

#include "room.h"
#include <string>

class LivingRoom : public Room {
    private:
        int mNumOfSofas;
        int mNumOfTables;

    public:
        LivingRoom(const std::string &wallPaint, int numWindows, int numFans, bool hasAc, int numOfSofas, int numOfTables);

        int getNumOfSofas() const;
        int getNumOfTables() const;
};


