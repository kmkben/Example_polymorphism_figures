#include "square.hpp"

using namespace std;

Square::Square(double width) : m_width(width)
{
}

void Square::print() const
{
	cout << "I am a square of " << m_width << " cm of width" << endl;
}

double Square::perimeter()
{
	return (4 * m_width);
}

double Square::area()
{
	return (m_width * m_width);
}


