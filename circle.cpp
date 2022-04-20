#include "circle.hpp"

using namespace std;


Circle::Circle() : m_radius(1)
{
}

Circle::Circle(double radius) : m_radius(radius)
{
}

void Circle::print() const
{
	cout << "I am a circle of radius " << m_radius << endl;
}

double Circle::perimeter()
{
	return (2 * 3.14 * m_radius);
}

double Circle::area()
{
	return (3.14 * m_radius * m_radius);
}
