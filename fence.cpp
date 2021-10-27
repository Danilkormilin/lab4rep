#include "graphics.h"
#include "picture.hpp"
void fence() {
    int i;
    setlinestyle(SOLID_LINE,2,3);
    setfillstyle(SOLID_FILL,RED);
    setcolor(RED);

 for( i=0 ; i <40; i++){
    int tch[] = {20*i, 500, 5+20*i,490,10+20*i,500};
     fillpoly(3,tch);
      bar(20*i,500,10+20*i,600);
    }
}