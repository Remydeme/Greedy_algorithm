#include <iostream>
#include <fstream>
#include <cmath>
#include "gps.hh"


int main()
{
	std::ifstream input;
	input.open("map.txt");
	Gps m(Tile(0,0));
	m.load_map(input);
	m.set_end();
	m.find_road();
}
