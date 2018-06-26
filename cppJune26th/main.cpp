#include "LineCircle.h"
#include <iostream>
#include <math.h>
#include "Circle.h"

#define tate 500
#define yoko 500
#define radius 100
#define xO yoko/2
#define yO tate/2
#define R(n) radius*sin(M_PI/n)

int main(int argc, char const *argv[])
{
    int numCircles, width; // 円の個数と半径  
    std::string color1, color2; // 円の描画色（配置／環状円）
    LineCircle *l_circles[2]; // 環状円
    
    if (argc < 4) {
        std::cout << "Lack of Arguments !";
        return 0;
    }
    numCircles = atoi(argv[1]);
    color1 = argv[2];
    color2 = argv[3];
    width = atoi(argv[4]);
   
    double posX = 0.0, posY = 0.0;
  	int i;

  	svg *svgObj = new svg();
  	ColorCircle *circle[numCircles];

  	svgObj->open("circle.html", 1000, 1000);

  	for(i=0;i<=numCircles;i++){
    	posX = xO + radius * cos(i*2*M_PI/numCircles - M_PI/2);
    	posY = yO + radius * sin(i*2*M_PI/numCircles - M_PI/2);
    	circle[i] = new ColorCircle(posX,posY,R(numCircles),color1);
    	circle[i]->draw(svgObj);
  	}
  	l_circles[0] = new LineCircle(xO,yO,radius + R(numCircles),color2,width);
  	l_circles[0] -> draw(svgObj);
  	l_circles[1] = new LineCircle(xO,yO,radius - R(numCircles),color2,width);
  	l_circles[1] -> draw(svgObj);
  	
  	svgObj->close();
	return (1);
}