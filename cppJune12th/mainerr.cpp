#include "Circle.h"

int main(){
  int p[2],r;
  bool judgement;
  Circle bool_circ1(15,20,30);
  Circle bool_circ2(20,40,90);
  for(int i=0; i<10; i++){
    Circle *circ = new Circle(i+10, 2*i+10, 15*(i+1));
    circ->getPosition(p);
    r = circ->getRadius();
    printf("Position = %d, %d, Radius = %d\n", p[0],p[1],r);
    circ->draw();
  }
  judgement = bool_circ2.checkOverlap(bool_circ1);
  printf("Collision? -> %s\n",judgement ? "true":"false");
  return (1);
}
