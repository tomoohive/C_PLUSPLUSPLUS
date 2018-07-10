#include "DoubleCircle.h"

DoubleCircle::DoubleCircle() : ColorCircle(){
	color2 = "yellow";
	rad2 = rad;
}

DoubleCircle::DoubleCircle(int cx, int cy, int r, std::string c="black", std::string c2="yellow", int r2=0) : ColorCircle(cx, cy, r, c){
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