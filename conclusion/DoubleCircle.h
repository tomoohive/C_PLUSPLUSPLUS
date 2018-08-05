#pragma once
#include "ColorCircle.h"

class DoubleCircle : public ColorCircle{
protected:
  int rad2;
  std::string color2;

public:
  DoubleCircle();
  DoubleCircle(int cx, int cy, int r, std::string c, std::string c2, int r2);

  void setColor(std::string c2, int r2);
  virtual void draw(svg*);
};