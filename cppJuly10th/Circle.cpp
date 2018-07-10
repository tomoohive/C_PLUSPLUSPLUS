#include "Circle.h"

Circle::Circle(){
  x = y = 0; rad = 10;
}

Circle::Circle(int cx, int cy, int r){
  x = cx; y = cy; rad = r;
}

void Circle::setPosition(int x, int y){
  this->x = x; this->y = y;
}

void Circle::setRadius(int rad){
  this->rad = rad;
}

int Circle::getRadius(){
  return this->rad;
}

void Circle::draw(){
  printf("位置(%d,%d)に半径%dの円を描画\n",x,y,rad);
}

void Circle::getPosition(int xy[]){
  xy[0] = this->x;
  xy[1] = this->y;
}

/*
bool Circle::checkOverlap(Circle circ){
  //Collision Judge Circle
  int p[2];
  int j_circ_x = this->x;
  int j_circ_y = this->y;
  int j_circ_rad = this->rad;
  circ.getPosition(p);
  int cx = p[0];
  int cy = p[1];
  int crad =circ.getRadius();
  if((j_circ_x-cx)*(j_circ_x-cx) + (j_circ_y-cy)*(j_circ_y-cy) <= (j_circ_rad+crad)*(j_circ_rad+crad))
  {
    return true;
  }else{
    return false;
  }
}
*/

void Circle::draw(svg* svgObj){
  svgObj->drawCircle(x,y,rad);
}
