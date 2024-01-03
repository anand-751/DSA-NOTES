#pragma once
#include "BaseRoom.h"

class Washroom : public BaseRoom {
    private:
        int mNumOfTaps;
        int mNumOfBasins;
    public:
        Washroom(const std::string &wallPaint, int numWindows, int numOfTaps, int numOfBasins);

        int getNumOfTaps() const;
        int getNumOfBasins() const;
};