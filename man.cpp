#include "graphics.h"
#include "picture.hpp"
void man() {
   setcolor(BLUE);
   circle(400, 300, 20);
   line(400, 320, 400, 400);    //head
   line(400, 320, 380, 350);    //left arm
   line(400, 320, 420, 350);    //right arm
   line(400, 400, 380, 430);    //left leg
   line(400, 400, 420, 430);    //right leg
}