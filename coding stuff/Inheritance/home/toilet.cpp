#include "toilet.h"

Toilet::Toilet(const std::string &wallPaint, int numWindows, bool hasEnglishSeat) : Base(wallPaint, numWindows), mHasEnglishSeat(hasEnglishSeat){}

bool Toilet::HasEnglishSeat() const{
    return mHasEnglishSeat;
}