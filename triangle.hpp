#ifndef DEF_TRIANGLE
#define DEF_TRIANGLE


#include <iostream>

#include "figure.hpp"


class Triangle : public Figure
{
	public:
		Triangle(double, double);

		virtual void print() const;

		virtual double perimeter();
		virtual double area(); 


	private:
		double m_base;
		double m_height;
};


#endif //DEF_TRIANGLE
