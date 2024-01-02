#include <string>

class Base{
    private:
        std::string mWallPaint;
        int mNumWindows;
    
    public:

        Base(const std::string &wallPaint, int numWindows);

        std::string getWallPaint();
        int getNumWindows();

};