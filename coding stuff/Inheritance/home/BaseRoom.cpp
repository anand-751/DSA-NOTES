#include "BaseRoom.h"

BaseRoom::BaseRoom(const std::string &wallPaint, int numWindows) : mWallPaint(wallPaint), mNumWindows(numWindows) {}

std::string BaseRoom::getWallPaint()
{
    return mWallPaint;
}
int BaseRoom::getNumWindows()
{
    return mNumWindows;
}
