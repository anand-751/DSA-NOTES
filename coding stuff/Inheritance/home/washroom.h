#include "base.h"

class Washroom : public Base{
    private:
        int mNumOfTaps;
        int mNumOfBasins;
    public:
        Toilet(const std::string &wallPaint, int numWindows, int numOfTaps, int numOfBasins);

        int getNumOfTaps() const;
        int getNumOfBasins() const;
}