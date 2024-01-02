#include "base.h"

class Washroom : public Base{
    private:
        int mNumOfTaps;
        int mNumOfSinks;
    public:
        Toilet(const std::string &wallPaint, int numWindows, int numOfTaps, int numOfSinks);

        int getNumOfTaps() const;
        int getNumOfSinks() const;
}