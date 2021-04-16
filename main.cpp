//this program demonstrates a simple class
#include <iostream>
using namespace std;

//declaring the rectangle class. this will allow us to eventually make a whole bunch of different rectangles
class Rectangle
{
	private:
		double width;
		double length;
	public:
		void setWidth(double);
		void setLength(double);
		double getWidth() const;
		double getLength() const;
		double getArea() const;
};
//a function that allows us to set the width of a given rectangle
void Rectangle::setWidth(double w)
{
	width = w;
}
//a function that allows us to set the length of a given rectangle
void Rectangle::setLength(double len)
{
	length = len;
}
//a function that returns the width of a given rectangle
double Rectangle::getWidth() const
{
	return width;
}
//a function that returns the length of a given rectangle
double Rectangle::getLength() const
{
	return length;
}
//a function that calculates and returns the area of a given rectangle
double Rectangle::getArea() const
{
	return width * length;
}

int main()
{
	double number; //declare local variables for temporary storage of numbers
	double totalArea;
	Rectangle kitchen; //three different instances of the rectangles with different properties
	Rectangle bedroom;
	Rectangle den;
	
	cout << "What is the Kitchen's length?\t"; //ask user for input about kitchen
	cin >> number;
	kitchen.setLength(number); //set the length of kitchen
	cout << "What is the Kitchen's width?\t"; //ask user for input about kitchen
	cin >> number;
	kitchen.setWidth(number); //set the width of kitchen
	
	cout << "What is the Bedroom's length?\t"; //ask user for input about bedroom
	cin >> number;
	bedroom.setLength(number); //set the length of bedroom
	cout << "What is the Bedroom's width?\t"; //ask user for input about bedroom
	cin >> number;
	bedroom.setWidth(number); //set the width of bedroom
	
	cout << "What is the Den's length?\t"; //ask user for input about den
	cin >> number;
	den.setLength(number); //set the length of den
	cout << "What is the Den's width?\t"; //ask user for input about den
	cin >> number;
	den.setWidth(number); //set the width of den
	
	totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea(); //get individual areas of each and add
	
	cout << "The total area of the three rooms is " << totalArea << endl; //output total area to user
	
	return 0; //done
}