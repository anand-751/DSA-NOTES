#include "room.h"

class BedRoom : public Room {
    private:
        int mNumBeds;

    public:
        BedRoom(const std::string &wallPaint, int numWindows, int numFans,bool hasAc,int numBeds);
        
        int getNumBeds() const;
    
};