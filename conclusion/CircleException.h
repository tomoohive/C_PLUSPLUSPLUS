#pragma once

#include<exception>
#include<string>
#include<iostream>

class CircleException : public std::exception{
private:
  std::string message;

public:
  CircleException(const std::string &msg) : message(msg) {};
  virtual ~CircleException() throw() {};
  void printSrackTrace() const{
    std::cerr << "Error in generating Circle : " << message << std::endl;
  }
};