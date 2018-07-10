#pragma once
#include<fstream>
#include<string>

class svg{
 private:
  std::ofstream ofs;  //To output FILE stream
 public:
  //Input FILE name and aspects, construct SVG root for output stream
  void open (std::string filename, int width, int height);
  void close(); //close SVG FILE
  void drawCircle(int x, int y, int rad, std::string color = "black", int width=0); //Draw circle
};
