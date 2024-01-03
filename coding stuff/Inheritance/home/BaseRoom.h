#pragma once
#include <string>

class BaseRoom {
    private:
        std::string mWallPaint;
        int mNumWindows;
    
    public:

        BaseRoom(const std::string &wallPaint, int numWindows);

        std::string getWallPaint();
        int getNumWindows();

};