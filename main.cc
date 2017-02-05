#include <iostream>
#include <fstream>
#include <cmath>
#include "map.hh"


int main()
{
	std::ifstream input;
	input.open("map.txt");
	Map m(Tile(0,0));
	m.load_map(input);
}
