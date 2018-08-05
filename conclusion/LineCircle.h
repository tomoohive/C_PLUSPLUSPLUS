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

  virtual void draw(svg*);
  void setwidth(int width);
};