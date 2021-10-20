#include "graphics.h"
#include "math.h"
#include "picture.hpp"
void sun() {
   int x = 50, y = 50;
   setfillstyle(SOLID_FILL, YELLOW);
    setcolor(YELLOW);
    fillellipse(x, y, 50, 50);
    double ug = 0;
    for (double ugol = 0; ugol < acos(-1); ugol += acos(-1) / 20)
    {
        setcolor(YELLOW);
    line(x + 60 * cos(ugol),
        y + 60 * sin(ugol),
        x + 100 * cos(ugol),
        y + 100 * sin(ugol));
    line(x - 60 * cos(ugol),
        y - 60 * sin(ugol),
        x - 100 * cos(ugol),
        y - 100 * sin(ugol));
    }
}