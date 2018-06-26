#include <iostream>
#include "Circle.h"

int main(){
  svg svgObj;
  Circle circle;
  int posX,posY,radius;

  std::cout << "Input X Coordinate =>";
  std::cin >> posX;
  std::cout << "Input Y Coordinate =>";
  std::cin >> posY;
  std::cout << "Input Radius =>";
  std::cin >> radius;

  circle.setPosition(posX,posY);
  circle.setRadius(radius);

  svgObj.open("circle.html", 640, 400);
  circle.draw(&svgObj);
  svgObj.close();
}
