#include "BaseRoom.h"

class Kitchen : public BaseRoom {
    private:
        int mNumOfShelves;
    public:
        Kitchen(const std::string &wallPaint, int numWindows, int numOfShelves);

        int getNumOfShelves() const;

};