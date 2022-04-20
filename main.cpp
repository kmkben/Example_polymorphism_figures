#include <iostream>
#include <vector>

#include "figure.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "triangle.hpp"

using namespace std;


int main()
{
	vector<Figure*> figures;

	figures.push_back(new Circle(1));
	figures.push_back(new Rectangle(10, 5));
	figures.push_back(new Square(4));
	figures.push_back(new Triangle(5, 3));

	cout << "================================================================================================\n" << endl;

	for (int i = 0; i < figures.size(); i++)
	{
		figures[i]->print();
		cout << "My perimeter is " << figures[i]->perimeter() << " and my area is " << figures[i]->area() << endl;

		cout << "---------------------------------------------------------------------\n" << endl;

		delete figures[i];
		figures[i] = 0;
	}

	cout << "=================================================================================================\n" << endl;

	return 0;
}
