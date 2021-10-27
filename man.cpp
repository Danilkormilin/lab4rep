#include "graphics.h"
#include "picture.hpp"

struct Human{
   int x,y;
   int r;
   
   Human(int x, int y):x(x), y(y), r(20){setcolor(WHITE);}
   
   void draw();
};

void Human::draw(){
   circle(x, y, r);
   int len = 3 * r;
   
   line(x, y + r, x, y + r + len);      //body
   
   line(x, y +  r, x - 2 * r, y + 2 * r);       //left arm
   line(x, y +  r, x + 2 * r, y + 2 * r);       //right arm
   
   line(x, y + r + len, x - 2 * r, y + 3 * r + len);    //left leg
   line(x, y + r + len, x + 2 * r, y + 3 * r + len);    //right leg
}


void man() {

   Human h(400, 475);
   h.draw();

}