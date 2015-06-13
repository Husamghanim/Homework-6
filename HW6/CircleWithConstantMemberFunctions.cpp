#include "CircleWithConstantMemberFunctions.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}
double Circle::getArea() const
{
	return radius*radius*3.14159;
}
double Circle::getRadius() const
{
	return radius;
}
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

bool operator<(Circle c1, Circle c2)
{
	return (c1.radius < c2.radius);
}
bool operator<=(Circle c1, Circle c2)
{
	return (c1.radius <= c2.radius);
}
bool operator==(Circle c1, Circle c2)
{
	return (c1.radius == c2.radius);
}bool operator!=(Circle c1, Circle c2)
{
	return (c1.radius != c2.radius);
}
bool operator>=(Circle c1, Circle c2)
{
	return (c1.radius >= c2.radius);
}
bool operator>(Circle c1, Circle c2)
{
	return (c1.radius > c2.radius);
}