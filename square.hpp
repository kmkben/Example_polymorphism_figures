#ifndef DEF_SQUARE
#define DEF_SQUARE


#include <iostream>

#include "figure.hpp"

class Square : public Figure
{
	public:
		Square(double);

		virtual void print() const;

		virtual double perimeter();
		virtual double area();



	private:
		double m_width;
};


#endif  //DEF_SQUARE
