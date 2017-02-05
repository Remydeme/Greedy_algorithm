#include "Tile.hh"



Tile::Tile(int x, int y) : x_(x), y_(y)
{
}


int Tile::get_x() const
{
 return x_; 
}

int Tile::get_y() const
{
	return y_;
}


void Tile::set_x(const int x)
{
	x_ = x;
}


void Tile::set_y(const int y)
{
	y_ = y;
}

std::ostream& operator << (std::ostream& out, Tile& t)
{
	out << t.x_ <<":"<< t.y_ << std::endl;
	return out;
}

void Tile::print()
{
	std::cout<< "J affiche bien quelque chose !"<<std::endl;
}

Tile& Tile::operator +=(const Tile& t)
{
	x_ += t.x_;
	y_ += t.y_;
	return *this;
}

Tile& Tile::operator -=(const Tile& t)
{
	x_ -= t.x_;
	y_ -= t.y_;
	return *this;
}



// ici i ===> y  et j =====> x

void Tile::operator ()(const int x, const int y, const char val)
{
	x_ = x;
	y_ = y;
	value_ = val;
}


// No memeber function 
Tile operator -(const Tile& t_1, const Tile& t_2)
{
	Tile tmp(t_1);
	tmp -= t_2;
	return tmp;
}

Tile operator +(const Tile& t_1, const Tile& t_2)
{
	Tile tmp(t_1);
	tmp += t_2;
	return tmp;
}

int operator *(const Tile& t_1, const Tile& t_2)
{
	Tile res = Tile(t_1 - t_2);
	return res.get_x() * res.get_x() + res.get_y() * res.get_y();
}
