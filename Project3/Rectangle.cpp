
#include "Rectangle.h"

Rectangle::Rectangle(float _length, float _height, Point p) : Figure(p) {

	length = _length;
	height = _height;
	cout << "Un rectangle de longueur :" << length << " et de largeur : " << height << " ,se trace du centre (" << GetX() << ";" << GetY() << ")" << endl;
	cout << GetArea() << endl;
}

Rectangle::~Rectangle()
{
	cout<<"del Rectangle en (" << GetX() << ";" << GetY() << ")" << endl;

}

void Rectangle::SetLength(float _length)
{
	length = _length;
}

void Rectangle::SetHeight(float _height)
{
	height = _height;
}

float Rectangle::GetLength()
{
	return length;
}

float Rectangle::GetHeight()
{
	return height;
}

float Rectangle::GetArea()
{
	return length*height;
}

void Rectangle::display()
{
	cout << "Un rectangle de longueur :" << length << " et de largeur : " << height << " ,se trace du centre (" << GetX() << ";" << GetY() << ")" << endl;
}

string Rectangle::SVG()
{
	string s;
	ostringstream o;

	o << "<rect x=\"" << GetX() << "\" y=\"" << GetY() << "\" height=\"" << GetLength() << "\" width=\"" << GetHeight() << "\" style=\"stroke:rgb(" << Getclrtrait().R << "," << Getclrtrait().G << "," << Getclrtrait().B << "); fill: rgb(" << GetcolorFill().R << "," << GetcolorFill().G << "," << GetcolorFill().B << ")\"/>";

	s = o.str();
	return s;
}