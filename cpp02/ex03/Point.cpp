// Insert header

#include "Point.hpp"

Point::Point(void)
{
    _x = 0;
    _y = 0;
}

Point::Point(const float x, const float y)
{
    _x = x;
    _y = y;
}

Point::Point(const Point& other)
{
    if (this != &other)
    {
        this->_x = other.getX();
        this->_y = other.getY();
    }
    return (*this);
}

Fixed   Point::getX(void) const
{
    return this->_x;
}

Fixed   Point::getY(void) const
{
    return this->_y;
}