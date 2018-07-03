#include "Circle.h"
#include "ColorCircle.h"
#include "DoubleCircle.h"
#include <iostream>
#include <math.h>

#define tate 500
#define yoko 500
#define radius 100
#define xO yoko/2
#define yO tate/2
#define R(n) radius*sin(M_PI/n)

int main(int argc, char* const argv[]) {
  int numCircles, rad2; // 円の個数と半径  
  std::string color1, color2, color3; // 円の描画色（配置／環状円）
  Circle *circ; // 基本クラスの変数として宣言
  if (argc < 6) {
    std::cout << "Lack of Arguments !";
    return 0;
  }
  numCircles = atoi(argv[1]);
  color1 = argv[2];
  color2 = argv[3];
  color3 = argv[4];
  if(0 >= atoi(argv[5]) || atoi(argv[5]) >= 100){
    std::cout << "Out of Range";
    return 0;
  }
  rad2 = atoi(argv[5]);
  double posX = 0.0, posY = 0.0;
  int i;
  svg svgObj;
  svgObj.open("circle.html", 1000, 1000);
  for (int i = 0; i < numCircles; i++) {
    posX = xO + radius * cos(i*2*M_PI/numCircles - M_PI/2);
    posY = yO + radius * sin(i*2*M_PI/numCircles - M_PI/2);
    if ((i % 2) == 0) { // i が偶数の場合
      circ = new ColorCircle (posX, posY, R(numCircles), color1);
    }
    else {// i が奇数の場合
      circ = new DoubleCircle (posX, posY, R(numCircles), color2, color3, R(numCircles)*rad2/100);
    }
      circ->draw (&svgObj); // ColorCircle と LineCircle が交互に呼び出される！
  }
  svgObj.close();
}