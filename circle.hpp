#ifndef DEF_CIRCLE
#define DEF_CIRCLE


#include <iostream>

#include "figure.hpp"


class Circle : public Figure
{
	public:
		Circle();
		Circle(double);

		virtual void print() const;

		virtual double perimeter();
		virtual double area();


	private:
		double m_radius;
};


#endif  //DEF_CIRCLE
