#include "rectangle.hpp"

using namespace std;

Rectangle::Rectangle(double length, double width) : m_length(length), m_width(width)
{
}

void Rectangle::print() const
{	
	cout << "I am a rectangle of " << m_length << " cm of length and " << m_width << " cm of width." << endl;
}

double Rectangle::perimeter()
{
	return (2 * (m_length + m_width));
}

double Rectangle::area()
{
	return (m_length * m_width); 
}
