#include "base.h"

class Room : public Base {
    private:
        int mNumFans;
        bool mHasAc; 
    public:
        Room(const std::string &wallPaint, int numWindows, int numFans,bool hasAc);

        int getNumFans() const;
        bool hasAc() const;

};