#include "ColorCircle.h"

ColorCircle::ColorCircle() : Circle(){
  color = "black";
}

ColorCircle::ColorCircle(int cx, int y, int r, std::string c = "black") : Circle(cx,cy,r){
  color = c;
}

void ColorCircle::draw(svg* svgObj){
  svgObj->drawCircle(x,y,rad,color);
}

void ColorCircle::setColor(std::string c){
  color = c;
}