#include "triangle.hpp"

using namespace std;


Triangle::Triangle(double base, double height) : m_base(base), m_height(height)
{
}

void Triangle::print() const
{
	cout << "I am a triangle with base " << m_base << " and height " << m_height << endl;
}

double Triangle::perimeter()
{
	return 3 * m_base;
}

double Triangle::area()
{
	return ((m_height * m_base) / 2);
}
