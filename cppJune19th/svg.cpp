#include "svg.h"

void svg::open(std::string filename, int width, int height){
  ofs.open(filename);
  ofs<<"<svg width='"<<width<<"'height='"<<height<<"'>";
  ofs << std::endl;
}

void svg::close(){
  ofs << "</svg>";
  ofs.close();
}

void svg::drawCircle(int x, int y, int rad){
  ofs << "<circle cx='"<<x<<"'cy='"<<y<<"'r='"<<rad<<"' fill='black'/>";
  ofs << std::endl;
}
