#include<stdio.h>
#include "BarGraph.h"

using namespace std;

ofstream svg::ofs;

int main(int argc, char const *argv[])
{
	Population population;
	population.read("Aichi.txt");
	BarGraph::draw(population);
	return 0;
}