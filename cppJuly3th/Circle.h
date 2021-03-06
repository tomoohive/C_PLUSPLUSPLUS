#pragma once
#include<iostream>
#include<stdio.h>
#include "svg.h"

class Circle{
 protected:
  int x,y; //Central Coordinates
  int rad; //Radius

 public:
  Circle(); //Constructor
  Circle(int cx, int cy, int r=10); //Different type

  //Member Function
  void draw ();
  void setPosition(int x, int y);
  void setRadius(int rad);
  int getRadius();
  void getPosition(int xy[]);
  //bool checkOverlap(Circle circ);
  //void draw(svg* svgObj);
  virtual void draw (svg*) = 0;
};
