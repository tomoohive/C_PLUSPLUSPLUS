#pragma once
#include<iostream>
#include<stdio.h>
#include "ColorCircle.h"

class LineCircle : public ColorCircle{
protected:
	int width;

public:
	LineCircle();
	LineCircle(int cx, int cy, int r, std::string c="black", int width=1);

	//void draw(svg* svgObj);
	virtual void draw (svg*);
	void setWidth(int width);
};