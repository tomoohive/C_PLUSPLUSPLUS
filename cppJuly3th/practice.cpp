#include "Circle.h"
#include "ColorCircle.h"
#include "LineCircle.h"

int main() {
  Circle *circ; // 基本クラスの変数として宣言
  svg svgObj;
  svgObj.open("test.html", 640, 400);
  for (int i = 0; i < 10; i++) {
      if ((i % 2) == 0) { // i が偶数の場合
          circ = new ColorCircle (20*(i+1), 20, 10, "green");
      }
      else {// i が奇数の場合
          circ = new LineCircle (20*(i+1), 20, 10, "red", 3);
      }
      circ->draw (&svgObj); // ColorCircle と LineCircle が交互に呼び出される！
  }
  svgObj.close();
}