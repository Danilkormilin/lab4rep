#include "graphics.h"
#include "picture.hpp"
void house() {
   setfillstyle(SOLID_FILL, COLOR(140,102,255));
   bar(300, 400, 500, 799); 
   
   int polypoints[] = { 300, 400, 400, 300, 500, 400 };
   setfillstyle(SOLID_FILL, COLOR(151,63,50));
   setcolor(COLOR(151,63,50));
   fillpoly(3, polypoints);
   
   setfillstyle(SOLID_FILL, COLOR(90,63,61));
   bar(350, 500, 450, 600);
   
   setcolor(COLOR(7,38,33));
   setfillstyle(SOLID_FILL, COLOR(7,38,33));
   fillellipse(425, 550, 5, 5);
}