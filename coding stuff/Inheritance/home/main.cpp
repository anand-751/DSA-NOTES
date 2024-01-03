#include <iostream>
#include "living_room.h"
#include "bedroom.h"

int main() {
    LivingRoom livingRoom("Beige", 2, 3, true, 3, 2);

    std::cout << "Living Room Details:" << std::endl;
    std::cout << "Wall Paint: " << livingRoom.getWallPaint() << std::endl;
    std::cout << "Number of Windows: " << livingRoom.getNumWindows() << std::endl;
    std::cout << "Number of Fans: " << livingRoom.getNumFans() << std::endl;
    std::cout << "Has AC: " << (livingRoom.hasAc() ? "Yes" : "No") << std::endl;
    std::cout << "Number of Sofas: " << livingRoom.getNumOfSofas() << std::endl;
    std::cout << "Number of Tables: " << livingRoom.getNumOfTables() << std::endl;

    std::cout << "\n------------------------\n";

    BedRoom bedRoom("Blue", 1, 2, false, 2);

    std::cout << "Bed Room Details:" << std::endl;
    std::cout << "Wall Paint: " << bedRoom.getWallPaint() << std::endl;
    std::cout << "Number of Windows: " << bedRoom.getNumWindows() << std::endl;
    std::cout << "Number of Fans: " << bedRoom.getNumFans() << std::endl;
    std::cout << "Has AC: " << (bedRoom.hasAc() ? "Yes" : "No") << std::endl;
    std::cout << "Number of Beds: " << bedRoom.getNumBeds() << std::endl;

    return 0;
}
