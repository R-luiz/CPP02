
#include "Point.hpp"

bool is_bigger(Point const v1, Point const v2, Point const v3)
{
	return(acosf(v1 * v2) < acosf(v1 * v3));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point AB(b - a);
	Point AC(c - a);
	Point AP(point - a);
	Point BA(a - b);
	Point BC(c - b);
	Point BP(point - b);
	Point CA(a - c);
	Point CB(b - c);
	Point CP(point - c);
	bool cond = true;
	if (is_bigger(AB, AC, AP) || is_bigger(AC, AB, AP) || is_bigger(BA, BC, BP) || is_bigger(BC, BA, BP) || is_bigger(CA, CB, CP) || is_bigger(CB, CA, CP))
		cond = false;
	return cond;
}
