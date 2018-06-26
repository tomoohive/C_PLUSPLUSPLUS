#include<stdio.h>
#include "svg.h"

class Circle{
 private:
  int x,y; //Central Coordinates
  int rad; //Radius

 public:
  Circle(); //Constructor
  Circle(int cx=0, int cy=0, int r=10); //Different type

  //Member Function
  void draw ();
  void setPosition(int x, int y);
  void setRadius(int rad);
  int getRadius();
  void getPosition(int xy[]);
  bool checkOverlap(Circle circ);
  void draw(svg* svgObj);
};
