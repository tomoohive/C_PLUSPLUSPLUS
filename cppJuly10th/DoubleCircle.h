#include "ColorCircle.h"
#pragma once

class DoubleCircle : public ColorCircle{
protected:
	int rad2;
	std::string color2;

public:
	DoubleCircle();
	DoubleCircle(int cx, int cy, int r, std::string c, std::string c2, int r2);

	//void draw(svg* svgObj);
	void setColor(std::string c2, int r2);
	virtual void draw (svg*);
};