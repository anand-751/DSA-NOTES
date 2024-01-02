#include "room.h"

class Living_room : public Room {
    private:
        int mNumOfSofas;
        int mNumOfTables;

    public:
        living_room(const std::string &wallPaint, int numWindows, int numFans,bool hasAc, int mNumOfSofas, int mNumOfTables);

        int getNumShelves() const;
        int getNumOfTables() const;
        
}