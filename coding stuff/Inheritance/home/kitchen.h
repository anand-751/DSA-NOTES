#include "Base"

class Kitchen : public Base{
    private:
        int mNumOfShelves;
    public:
        Kitchen(const std::string &wallPaint, int numWindows, int numOfShelves);

        int getNumOfShelves() const;

}