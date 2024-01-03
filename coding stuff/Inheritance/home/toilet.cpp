#include "toilet.h"

Toilet::Toilet(const std::string &wallPaint, int numWindows, bool hasEnglishSeat) : BaseRoom(wallPaint, numWindows), mHasEnglishSeat(hasEnglishSeat){}

bool Toilet::hasEnglishSeat() const{
    return mHasEnglishSeat;
}