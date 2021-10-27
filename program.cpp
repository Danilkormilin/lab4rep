#include "graphics.h"
#include "picture.hpp"
int main()
{ initwindow(800,600);
     setfillstyle(SOLID_FILL,BLUE);
   bar(0,0,800,600);
  house();
  sun();
  man();
  fence();
  getch();
  closegraph();
}
