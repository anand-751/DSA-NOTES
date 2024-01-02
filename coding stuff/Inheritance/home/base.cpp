#include "base.h"

Base::Base(const std::string &wallPaint, int numWindows) : mWallPaint(wallPaint), mNumWindows(numWindows) {}

std::string Base::getWallPaint()
{
    return mWallPaint;
}
int Base::getNumWindows()
{
    return mNumWindows;
}
