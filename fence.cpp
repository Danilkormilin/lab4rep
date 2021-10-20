#include "graphics.h"
#include "picture.hpp"
void fence() {
    int i;
    setlinestyle(SOLID_LINE,2,3);
    setfillstyle(SOLID_FILL,RED);
    setcolor(RED);

 for( i=0 ; i <10; i++){
      line(200+20*i, 500, 205+20*i,490);
      line(205+20*i,490,210+20*i,500);
      bar(200+20*i,500,210+20*i,600);
    }
}