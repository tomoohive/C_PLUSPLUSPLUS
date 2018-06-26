#pragma once
#include<iostream>
#include<stdio.h>
#include "ColorCircle.h"

class LineCircle : public ColorCircle{
protected:
	int width;

public:
	LineCircle();
	LineCircle(int cx, int cy, int r, std::string c, int width);

	void draw(svg* svgObj);
	void setWidth(int width);
};