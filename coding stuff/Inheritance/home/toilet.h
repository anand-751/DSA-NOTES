#include "base.h"

class Toilet : public Base {
    private:
        bool mHasEnglishSeat;
    public:
        Toilet(const std::string &wallPaint, int numWindows, bool hasEnglishSeat);

        bool getHasEnglishSeat() const;
};