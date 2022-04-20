#ifndef DEF_FIGURE
#define DEF_FIGURE


#include <iostream>

class Figure
{
	public:
		//Figure();

		virtual void print() const;

		virtual double perimeter() = 0;
		virtual double area() = 0;
};


#endif  //DEF_FIGURE
