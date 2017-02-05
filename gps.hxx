#include "gps.hh"

inline const Gps::memory& Gps::road_get() const
{
	return road_;
}

inline void Gps::set_end() 
{
	std::cout<< " Please Enter the coodinate of your destination : " << "\n \n";

	std::cout << "Positon X : " << "\t";
	int tmp;
	std::cin>>tmp;
	if (tmp < 0 || tmp > columns_)
		throw std::invalid_argument("Bad input. X is not in the range");
	end_.set_x(tmp);
	std::cout << "Position Y : "<< "\t";
	std::cin>>tmp;
	if (tmp < 0 || tmp > lines_)
		throw std::invalid_argument("Bad input. X is not int the range.");
	end_.set_y(tmp);
}
