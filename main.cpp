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
	
	cout << "What is Triangle one's base?\t"; //ask user for input about triangle one
	cin >> number;
	one.setBase(number); //set the base of triangle one
	cout << "What is Triangle one's height?\t"; //ask user for input about triangle one
	cin >> number;
	one.setHeight(number); //set the height of triangle one
  //Display user inputs for the triangle and calculate the area
  cout << "Triangle One's base is: " << one.getBase() << "\nTriangle One's height is: " << one.getHeight() << "\nTriangle One's area is: " << one.getArea() << endl;
	
	cout << "What is Triangle two's base?\t"; //ask user for input about triangle two
	cin >> number;
	two.setBase(number); //set the base of triangle two
	cout << "What is Triangle two's height?\t"; //ask user for input about triangle two
	cin >> number;
	two.setHeight(number); //set the height of triangle two
  //Display user inputs for the triangle and calculate the area
  cout << "Triangle Two's base is: " << two.getBase() << "\nTriangle Two's height is: " << two.getHeight() << "\nTriangle Two's area is: " << two.getArea() << endl;
	
	cout << "What is Triangle three's base?\t"; //ask user for input about triangle three
	cin >> number;
	three.setBase(number); //set the base of triangle three
	cout << "What is Triangle three's height?\t"; //ask user for input about triangle three
	cin >> number;
	three.setHeight(number); //set the height of triangle three
  //Display user inputs for the triangle and calculate the area 
  cout << "Triangle Three's base is: " << three.getBase() << "\nTriangle Three's height is: " << three.getHeight() << "\nTriangle Three's area is: " << three.getArea() << endl;
	
	totalArea = one.getArea() + two.getArea() + three.getArea(); //get individual areas of each and add
	
	cout << "The total area of the three triangles is " << totalArea << endl; //output total area to user
	
	return 0; //done
}