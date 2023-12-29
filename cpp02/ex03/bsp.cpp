// Insert header

#include "Point.hpp"

static Fixed    abs_value(Fixed num)
{
    if (num < 0)
        return (num * -1);
    else
        return (num);
}

static Fixed    area(Point const a, Point const b, Point const c)
{
    Fixed   x1 = a.getX(), y1 = a.getY();
    Fixed   x2 = b.getX(), y2 = b.getY();
    Fixed   x3 = c.getX(), y3 = c.getY();

    Fixed   area = abs_value((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2);
    return (area);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed abcArea = area(a, b, c);
    Fixed pabArea = area(point, a, b);
    Fixed pacArea = area(point, a, c);
    Fixed pbcArea = area(point, b, c);

    const Fixed error_margin = Fixed(static_cast<float>(0.01));

    if (pabArea == 0 || pacArea == 0 || pbcArea == 0)
        return (false);
    else if (abs_value(abcArea - (pabArea + pacArea + pbcArea)) < error_margin)
        return (true);
    else
        return (false);
}