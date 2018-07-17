#include <iostream>
#include <fstream>
#include "Population.h"

void Population::read(const char *fileName){
	ifstream ifs(fileName);
	if(ifs.fail){
		cerr << "File do not exist.";
		exit(0);
	}
	string str;
	getline(ifs, str, '\r');
	vector<string> labelStrs = split(str, '.');
	for(int i=0; i < labelStrs.at(i)){
		labels.push_back(labelStrs.at(i));
	}
	getline(ifs, str, '\r');
	vector<string> valueStrs = split(str, ',');
	for(int i=0; i<valueStrs.size(); i++){
		values.push_back(atoi(valueStrs.at(i).c_str()));
	}
}

vector<string> Population:split(string& str, char delim){
	vector<string> res;
	size_t current = 0, found;
	while((found = str.find_first_of(delim, current)) != string::npos){
		res.push_back(string(str, current, found-current));
		current = found + 1;
	}
	res.push_back(string(str, current, str.size() - current));
	return res;
}