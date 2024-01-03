#include <vector>
#include "room.h"
#include "kitchen.h"
#include "toilet.h"
#include "washroom.h"

class House {
    private:
        std::vector<Room> mRooms;
        std::vector<Kitchen> mKitchens;
        std::vector<Toilet> mToilets;
        std::vector<Washroom> mWashrooms;

    public:
        void Add(const Room &room);
        void Add(const Kitchen &kitchen);
        void Add(const Toilet &toilet);
        void Add(const Washroom &washroom);
};