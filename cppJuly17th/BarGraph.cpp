#include <iostream>
#include <fstream>
#include "BarGraph.h"

void BarGraph::draw(Population pop){
	svg::open("Population.html",1000,1000);
	vector<string> labels = pop.get_labels();
	vector<int> values = pop.get_values();
	for(int i=0; i < labels.size(); i++){
		svg::drawText(5, 20 + i*20, labels[i]);
	}
	for(int i=0; i < values.size(); i++){
		svg::drawRect(100, 10 + i*20, values[i], 7);
	}
	svg::close();
}