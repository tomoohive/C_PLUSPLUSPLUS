#include "svg.h"
#include "ColorCircle.h"

int main () {
    svg svgObj; // SVGドキュメントを生成するオブジェクト

    Circle circ(100,100,50);
    ColorCircle c_circ(100,200,80,"red");

    svgObj.open("colorCircle.html", 640, 400);
    c_circ.draw (&svgObj);
    circ.draw (&svgObj);

    return (1);
}