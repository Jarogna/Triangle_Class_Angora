//this program demonstrates a simple class
//Student: Ronald Angora
//Date: 04/16/21
#include <iostream>
using namespace std;

//declaring the triangle class. this will allow us to eventually make a whole bunch of different triangles
class Triangle
{
	private:
		double base;
		double height;
	public:
		void setBase(double);
		void setHeight(double);
		double getBase() const;
		double getHeight() const;
		double getArea() const;
};
//a function that allows us to set the width of a given triangle
void Triangle::setBase(double b)
{
	base = b;
}
//a function that allows us to set the length of a given triangle
void Triangle::setHeight(double h)
{
	height = h;
}
//a function that returns the width of a given triangle
double Triangle::getBase() const
{
	return base;
}
//a function that returns the length of a given triangle
double Triangle::getHeight() const
{
	return height;
}
//a function that calculates and returns the area of a given triangle
double Triangle::getArea() const
{
	return height * base / 2;
}

int main()
{
	double number; //declare local variables for temporary storage of numbers
	double totalArea;
	Triangle one; //three different instances of the triangles with different properties
	Triangle two;
	Triangle three;
	
	cout << "What is the Triangle one's base?\t"; //ask user for input about triangle one
	cin >> number;
	one.setBase(number); //set the length of triangle one
	cout << "What is the Triangle one's height?\t"; //ask user for input about triangle one
	cin >> number;
	one.setHeight(number); //set the width of triangle one
	
	cout << "What is the Triangle two's length?\t"; //ask user for input about triangle two
	cin >> number;
	two.setBase(number); //set the length of triangle two
	cout << "What is the Triangle two's width?\t"; //ask user for input about triangle two
	cin >> number;
	two.setHeight(number); //set the width of triangle two
	
	cout << "What is the Den's length?\t"; //ask user for input about triangle three
	cin >> number;
	three.setBase(number); //set the length of triangle three
	cout << "What is the Den's width?\t"; //ask user for input about triangle three
	cin >> number;
	three.setHeight(number); //set the width of triangle three
	
	totalArea = one.getArea() + two.getArea() + three.getArea(); //get individual areas of each and add
	
	cout << "The total area of the three rooms is " << totalArea << endl; //output total area to user
	
	return 0; //done
}