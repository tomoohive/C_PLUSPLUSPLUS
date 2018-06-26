#include <iostream>
#include <math.h>
#include "Circle.h"

#define height 500
#define width 500
#define radius 100
#define xO width/2
#define yO height/2
#define R(n) radius*sin(M_PI/n)

int main(){
  double posX = 0.0, posY = 0.0;
  int N,i;

  std::cout << "Input N =>";
  std::cin >> N;

  svg *svgObj = new svg();
  Circle *circle[N];

  svgObj->open("circle.html", 1000, 1000);

  for(i=0;i<=N;i++){
    posX = xO + radius * cos(i*2*M_PI/N - M_PI/2);
    posY = yO + radius * sin(i*2*M_PI/N - M_PI/2);
    circle[i] = new Circle(posX,posY,R(N));
    circle[i]->draw(svgObj);
  }
  svgObj->close();
}
