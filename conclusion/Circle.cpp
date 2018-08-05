#include "Circle.h"

Circle::Circle(){
  x = y = 0; rad = 10;
}

Circle::Circle(int cx, int cy, int r){
  x = cx; y = cy; rad = r;
}

void Circle::setPosition(int x, int y) throw(CircleException){
  if(x<0 || y<0)
    throw CircleException("Cordinate of position is out of range!");
  else
    this->x = x; this->y = y;
}

void Circle::setRadius(int rad) throw(CircleException){
  if(rad <= 0)
    throw CircleException("Radius is less than zero!");
  else
    this->rad = rad;
}

int Circle::getRadius(){
  return this->rad;
}

void Circle::getPosition(int xy[]){
  xy[0] = this->x;
  xy[1] = this->y;
}

void Circle::draw(svg* svgObj){
  svgObj->drawCircle(x,y,rad);
}