#include "BaseRoom.h"

class Toilet : public BaseRoom {
    private:
        bool mHasEnglishSeat;
    public:
        Toilet(const std::string &wallPaint, int numWindows, bool hasEnglishSeat);

        bool hasEnglishSeat() const;
};