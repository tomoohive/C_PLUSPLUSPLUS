#include "svg.h"

void svg::open(std::string filename, int width, int height){
  ofs.open(filename);
  ofs<<"<svg width'"<<width<<"'height='"<<height<<"'>";
  ofs<<std::endl;
}

void svg::close(){
  ofs<<"</svg>";
  ofs.close();
}

void svg::drawCircle(int x, int y, int rad, std::string color, int width){
  if (width > 0) 
      ofs <<  "<circle cx='" << x << "' cy='" << y << "' r='" << rad
      << "' stroke='" << color << "' stroke-width='" << width << "' fill='none' />";
    else  
      ofs << "<circle cx='"<<x<<"'cy='"<<y<<"'r='"<<rad<<"'fill='"<<color<<"'/>";
    ofs << std::endl;
}