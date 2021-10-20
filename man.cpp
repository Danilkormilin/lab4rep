#include "graphics.h"
#include "picture.hpp"
void man() {
   setcolor(BLUE);
   circle(400, 370, 20);
   line(400, 390, 400, 470);    //head
   line(400, 390, 380, 420);    //left arm
   line(400, 390, 420, 420);    //right arm
   line(400, 470, 380, 500);    //left leg
   line(400, 470, 420, 500);    //right leg
}