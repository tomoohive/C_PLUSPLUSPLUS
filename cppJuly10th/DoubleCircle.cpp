#include "DoubleCircle.h"

DoubleCircle::DoubleCircle() : ColorCircle(){
	color2 = "black";
	rad2 = 0;
}

DoubleCircle::DoubleCircle(int cx, int cy, int r, std::string c, std::string c2, int r2) : ColorCircle(cx, cy, r, c){
	color2 = c2;
	rad2 = r2;
}

void DoubleCircle::draw(svg* svgObj){
	svgObj -> drawCircle(x,y,rad,color);	
	svgObj -> drawCircle(x,y,rad2,color2);	
}

void DoubleCircle::setColor(std::string c2, int r2){
	color2 = c2;
	rad2 = r2;	
}