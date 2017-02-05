#include "map.hh"



Map::Map(const Tile position) : position_(position)
{
}

void Map::load_dimension(std::ifstream& input)
{
	std::string tmp;
	input>> tmp;
	lines_ = std::atoi(tmp.c_str());
	if (lines_ < 0)
		throw std::out_of_range("Invalid size");
	input >> tmp;
	columns_ = std::atoi(tmp.c_str());
	if (columns_ < 0)
		throw std::out_of_range("Invalid size");

	std::cout<< "line " << lines_ << ":" << "columns" << columns_ << "\n";
}


int next


void Map::create_matrice()
{
	for (auto i = 0; i < lines_; ++i)
		map_.push_back(std::vector<Tile>(columns_));
}


const Tile& Map::get_position() const
{
	return position_;
}


void Map::load_map(std::ifstream& input)
{
	if (input.is_open())
	{
		load_dimension(input);
		create_matrice();
		for (auto i = 0; i < lines_; i++)
		{
			char tmp;
			input.get(tmp); // remove end of line char
			for (auto j = 0; j < columns_; j++)
			{
				input.get(tmp);
				std::cout<<" i : "<<i << " j :" << j << " value "<<tmp << "\n";
				map_[i][j](j, i, tmp);
				
			}
		}
	}
	else
	    throw std::ios_base::failure("The file is not open or does not exist");

}
