#ifndef DEF_RECTANGLE
#define DEF_RECTANGLE


#include <iostream>

#include "figure.hpp"


class Rectangle : public Figure
{
	public:
		Rectangle(double, double);

		virtual void print() const;

		virtual double perimeter();
		virtual double area();


	private:
		double m_length;
		double m_width;
};


#endif  //DEF_RECTANGLE
