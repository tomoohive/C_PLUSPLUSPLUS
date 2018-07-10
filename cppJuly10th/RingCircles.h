#pragma once
#include <vector>
#include "CircleException.h"
#include "svg.h"
#include <math.h>
#include <iostream>

#define tate 500
#define yoko 500
#define radius 100
#define R(n) radius*sin(M_PI/n)

template <class T> class RingCircles{
private:
	std::vector<T *> circles;
	int x,y;

public:

	RingCircles(int n){
		if(n < 4)
			throw CircleException("Error in RingCircles ... the number of circles is too small!");
		else if (n > 100)
			throw CircleException("Error in RingCircles ... the number of circles is too large!");
		else
			for(int i = 0; i < n; i++){
				T *circle;
				circle = new T();
				circle->setRadius((int)R(n));
				circles.push_back(circle);
			}
	}

	void setPosition(int x, int y){
		this->x = x;
		this->y = y;
		for(int i=0; i < circles.size(); i++){
			circles[i]->setPosition(x + radius * cos(i*2*M_PI/circles.size() - M_PI/2),y + radius * sin(i*2*M_PI/circles.size() - M_PI/2));
		}
	}

	void draw(svg *svgObj){
		for(int i=0; i < circles.size(); i++){
			circles[i] -> draw(svgObj);
		}
	}
};