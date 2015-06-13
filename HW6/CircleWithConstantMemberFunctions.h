#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
	friend bool operator<(Circle, Circle);
	friend bool operator<=(Circle, Circle);
	friend bool operator==(Circle, Circle);
	friend bool operator!=(Circle, Circle);
	friend bool operator>=(Circle, Circle);
	friend bool operator>(Circle, Circle);


private:
	double radius;
	static int numberOfObjects;
};
#endif