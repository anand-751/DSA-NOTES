#include "house.h"

void House::Add(const Room &room) {
    mRooms.push_back(room);
}

void House::Add(const Kitchen &kitchen) {
    mKitchens.push_back(kitchen);
}

void House::Add(const Toilet &toilet) {
    mToilets.push_back(toilet);
}

void House::Add(const Washroom &washroom) {
    mWashrooms.push_back(washroom);
}
