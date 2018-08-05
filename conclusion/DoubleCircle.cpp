#include "DoubleCircle.h"

DoubleCircle::DoubleCircle() : ColorCircle(){
  color2 = "yellow";
  rad2 = (int)((float)rad*0.5);
}

DoubleCircle::DoubleCircle(int cx, int cy, int r, std::string c="black", std::string c2="yellow", int r2=0) : ColorCircle(cx, cy, r, c){
  color2 = c2;
  rad2 = (int)((float)rad*0.5);
}