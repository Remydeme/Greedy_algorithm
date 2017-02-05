#pragma once
#include <vector>
#include <fstream>
#include "tile.hh"


class Map
{

	public:

	using map_t = std::vector<std::vector<Tile>>;
	
	Map() = default;
	Map(const Tile position);
	
	// create initialise the map 
	void load_map(std::ifstream& input);
	void load_dimension(std::ifstream& input);
        void create_matrice();
        const Tile& get_position() const;
	
	// work with the map
	
	private:

	map_t map_;
	int lines_;
	int columns_;
	Tile position_;
};
