#pragma once
#include<iostream>
#include<stdio.h>
#include "CircleException.h"
#include "svg.h"

class Circle{
protected:
  int x,y;
  int rad;

public:
  Circle();
  Circle(int cx, int cy, int r=10);

  ~Circle() {}
  void setPosition(int x, int y) throw(CircleException);
  void setRadius(int rad) throw(CircleException);
  int getRadius();
  void getPosition(int xy[]);
  virtual void draw(svg*) = 0;
};