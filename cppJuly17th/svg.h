#pragma once
#include<fstream>
#include<string>

class svg{
 private:
  static std::ofstream ofs;  //To output FILE stream
 public:
  //Input FILE name and aspects, construct SVG root for output stream
  static void open (std::string filename, int width, int height);
  static void close(); //close SVG FILE
  static void drawCircle(int x, int y, int rad, std::string color = "black", int width=0); //Draw circle
  static void drawRect(int x, int y, int width, int height);
  static void drawText(int x, int y, std::string label);
};
