#pragma once
#include<fstream>
#include<string>

class svg{
private:
  std::ofstream ofs;

public:
  void open(std::string filename, int width, int height);
  void close();
  void drawCircle(int x, int y, int rad, std::string color = "black", int width=0);
};