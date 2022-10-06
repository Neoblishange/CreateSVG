#include "Circle.h"

Circle::Circle(float _Ray, Point p) : Figure(p)
{
	Ray = _Ray;
	cout << "Un cercle de rayon : " << Ray <<  " , se trace du centre (" << GetX() << ";" << GetY() << ")" << endl;
	cout << GetArea() << endl;
}

Circle::~Circle()
{
	cout << "del cercle en (" << GetX() << ";" << GetY() << ")" << endl;
}

void Circle::SetRay(float _Ray)
{
	Ray = _Ray;
}

float Circle::GetRay()
{
	return Ray;
}

float Circle::GetArea()
{
	const double g_Pi = 3.14159265358979323846;
	return g_Pi*Ray*Ray;
}

void Circle::display()
{
	cout << "Un cercle de rayon : " << Ray << " , se trace du centre (" << GetX() << ";" << GetY() << ")" << endl;
}

string Circle::SVG()
{
	string s;
	ostringstream o;
	o << "<circle cx=\"" << GetX() << "\" cy=\"" << GetY() << "\" r=\"" << GetRay() << "\" style=\"stroke:rgb(" << Getclrtrait().R << "," << Getclrtrait().G << "," << Getclrtrait().B<< "); fill: rgb(" << GetcolorFill().R << "," << GetcolorFill().G << "," <<GetcolorFill().B << ")\"/>";
	s = o.str();
	return s;
}
