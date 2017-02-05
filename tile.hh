#pragma once
#include <iostream>
namespace gps
{
class Tile
{
	private:

		int x_;
		int y_;
		char value_ = 0;
	public:

	     Tile(int x, int y);
	     Tile() = default;
	     static void print(); 
	     friend std::ostream& operator << (std::ostream& out, Tile& t);

	     // getter et setter 

	     int get_x() const;
	     int get_y() const;

	     void set_x(const int x);
	     void set_y(const int y);

	     // operateur 

	     Tile& operator+= (const Tile& t);
	     Tile& operator-= (const Tile& t);
	    
             void operator ()(const int x, const int y, const char val);
	     // function determine the closest Tile


};

Tile operator -(const Tile& t_1, const Tile& t_2);
Tile operator +(const Tile& t_1, const Tile& t_2);
int  operator *(const Tile& t_1, const Tile& t_2);
}
