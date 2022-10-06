#include "Square.h"

Square::Square(float _side, Point p) : Figure(p)
{
	side = _side;
	cout << "Un carre de side : " << side << " , se trace du centre (" << GetX() << ";" << GetY() << ")" << endl;
	cout << GetArea() << endl;
}

Square::~Square()
{
	cout << "del carre en (" << GetX() << ";" << GetY() << ")" << endl;
}

void Square::SetSide(float _Side)
{
	side = _Side;
}

float Square::GetSide()
{
	return side;
}

float Square::GetArea()
{
	return side*side;
}

void Square::display()
{
	cout << "Un carre de side : " << side << " , se trace du centre (" << GetX() << ";" << GetY() << ")" << endl;
}

string Square::SVG()
{
	string s;
	ostringstream o;

	o << "<rect x=\"" << GetX() << "\" y=\"" << GetY() << "\" height=\"" << GetSide() << "\" width=\"" << GetSide() << "\" style=\"stroke:rgb(" << Getclrtrait().R << Getclrtrait().G << Getclrtrait().B << "); fill: rgb(" << GetcolorFill().R << "," << GetcolorFill().G << "," << GetcolorFill().B << ")\"/>";

	s = o.str();
	return s;
}
