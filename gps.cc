#include "gps.hh"
#include "min.hh"

namespace gps
{
Gps::Gps(const Tile position) : Map(position)
{
}

// Here this function will only compute the min for the good value
Tile Gps::next_tile()
{
	int x = position_.get_x();
	int y = position_.get_y();
	if (x + 1 < columns_ && y + 1 < lines_)
		min (map_[y + 1][ x + 1] * end_, x + 1, y + 1);
	if (x + 1 < columns_)
		min (map_[y][x + 1] * end_, x + 1, y);
	if (y + 1 < lines_)
		min (map_[y + 1][x] * end_, x, y + 1);
	if (x - 1 > 0 && y - 1 >= 0)
		min (map_[y - 1][x - 1] * end_, x - 1, y - 1);
	if (x - 1 > 0)
		min (map_[y][x - 1] * end_, x - 1, y);
	if (x + 1 < columns_ && y - 1 >= 0)
		min (map_[y + 1][x - 1] * end_, x - 1, y + 1);
	if (x + 1 < columns_ && y - 1 >= 0)
		min (map_[y - 1][x + 1] * end_, x + 1, y - 1);
	return map_[min.get_y()][min.get_x()]; 
}


void Gps::find_road()
{
	Tile tmp;
	for (int i = 0; i < 2; i++)
	{
		position_ = next_tile();
		std::cout << position_;
	}
}

}
