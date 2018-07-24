#include <iostream>
#include <fstream>
#include "Population.h"

void Population::read(const char *fileName){
	ifstream ifs(fileName);
	if(ifs.fail()){
		cerr << "File do not exist.";
		exit(0);
	}
	string str;
	getline(ifs, str, '\r');
	vector<string> labelStrs = split(str, ',');
	for(int i=0; i < labelStrs.size(); i++){
		labels.push_back(labelStrs.at(i));
	}
	getline(ifs, str, '\r');
	vector<string> valueStrs = split(str, ',');
	for(int i=0; i<valueStrs.size(); i++){
		values.push_back(atoi(valueStrs.at(i).c_str()));
	}
}

vector<string> Population::get_labels(){
	return labels;
}

vector<int> Population::get_values(){
	return values;
}

vector<string> Population::split(string& str, char delim){
	vector<string> res;
	size_t current = 0, found;
	while((found = str.find_first_of(delim, current)) != string::npos){
		res.push_back(string(str, current, found-current));
		current = found + 1;
	}
	res.push_back(string(str, current, str.size() - current));
	return res;
}

vector<int> Population::operator % (Population& p){
	for(int i=0; i < values.size(); i++){
		values[i] = static_cast<int>((float)values[i]/(float)p.values[i]*100);
	}
	return values;
}

int Population::operator ! (){
	int max = values[0];
	int N = 0;
	for(int i=0; i < values.size(); i++){
		if(values[i] > max){
			max = values[i];
			N = i;
		}
	}
	return N;
}

std::string Population::operator ^ (int n){
	return labels[n];
}