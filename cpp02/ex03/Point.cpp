// Insert header

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
   
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{

}

Point::Point(const Point &src) : _x(src.getX()), _y(src.getY())
{

}

Point::~Point(void)
{

}

Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        (Fixed)this->_x = (Fixed)other.getX();
        (Fixed)this->_y = (Fixed)other.getY();
    }
    return *this;
}

Fixed   Point::getX(void) const
{
    return this->_x;
}

Fixed   Point::getY(void) const
{
    return this->_y;
}