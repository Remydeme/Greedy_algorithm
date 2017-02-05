#include "map.hh"




class Gps : public Map
{
	public:

	using memory = std::vector<Tile>;

	void find_road();
	Tile next_tile(); // return the closest Tile
	void set_end();
	const memory& road_get() const; 

	private:

	memory road_; // the road to the end point 
	memory unused__; // garbage contains the element that we don't use 
	memory cross_; // Tile already cross 
	Tile end_;

};

#include "gps.hxx@"
