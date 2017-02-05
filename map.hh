#pragma once
#include <vector>
#include <fstream>
#include "tile.hh"

namespace gps
{
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

	const Tile& operator()(const int x, const int y) const ;



	// work with the map
	
	protected:

	map_t map_;
	int lines_;
	int columns_;
	Tile position_;
};

}
