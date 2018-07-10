#include "RingCircles.h"
#include "ColorCircle.h"
#include "LineCircle.h"
#include "DoubleCircle.h"
#include <iostream>
#include <math.h>

#define x 150
#define y 150
#define radius 100
#define R(n) radius*sin(M_PI/n)

int main(int argc, char const *argv[])
{
	int n = atoi(argv[1]);
	svg svgObj;

	RingCircles<ColorCircle> cc(n);
	cc.setPosition(x,y);
	RingCircles<LineCircle> lc(n);
	lc.setPosition(x + 2*radius + 2*R(n),y);
	RingCircles<DoubleCircle> dc(n);
	dc.setPosition(x + 2*(2*radius + 2*R(n)),y);

	svgObj.open("RingCircles.html",1280,400);
	cc.draw(&svgObj);
	lc.draw(&svgObj);
	dc.draw(&svgObj);
	svgObj.close();
	return 0;
}