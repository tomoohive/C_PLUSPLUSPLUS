#pragma once
#include "Circle.h"

class ColorCircle : public Circle{
protected:
	std::string color;

public:
	ColorCircle();
	ColorCircle(int cx, int cy, int r, std::string c);

	//void draw(svg* svgObj);
	void setColor(std::string c);
	virtual void draw (svg*);
};