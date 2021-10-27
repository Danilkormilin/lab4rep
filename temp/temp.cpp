


struct Human{
   int x,y;
   int r;
   
   Human(int x, int y):x(x), y(y), r(20){setcolor(WHITE);}
   
   void draw();
};

void Human::draw(){
   circle(x, y, r);
   line(x, y + r, x, x);
   line(x, y + r, x - r, x - 2 * r);
   line(x, y + r, x + r, x - 2 * r);
   line(x, x, x - r, x + r);    //left leg
   line(x, x, x + r, x + r);    //right leg
}


void man() {
   //setcolor(BLUE);
   Human h(400, 300);
   _abracadabra_cast(h);