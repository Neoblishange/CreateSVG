#include "FigGeo.h"
#include <sstream>

Figure::Figure(Point _centre)
{
	centre.x = _centre.x;
	centre.y = _centre.y;
	SetColorFill(0, 0, 0);
	Setclrtrait(0,0,0);
	SetBorderSize(0);
}

Figure::~Figure()
{
}

int Figure::GetX()
{
	return centre.x;
}

int Figure::GetY()
{
	return centre.y;
}

void Figure::SetColorFill(float R, float G, float B)
{
	colorFill.R =R;
	colorFill.B =B ;
	colorFill.G =G ;
}

void Figure::SetBorderSize(float ep)
{
	epaisseurtrait = ep;
}

void Figure::Setclrtrait(float R, float G, float B)
{
	clrtrait.R = R;
	clrtrait.B = B;
	clrtrait.G = G;
}

RGB Figure::GetcolorFill()
{
	return colorFill;
}

float Figure::Getepaisseurtrait()
{
	return epaisseurtrait;
}

RGB Figure::Getclrtrait()
{
	return clrtrait;
}

string Figure::Convert(int a)
{
	string s;
	ostringstream o;
	int reste,z;
	char r[2];
	int i = 0;
	if (a != 0) {
		while (a != 0) {
			z = a % 16;
			if (z < 10) {
				r[i] = 48 + z;
				i++;
			}
			else {
				r[i] = 55 + z;
				a = a / 16;
				i++;
			}
		}
		for (int a = i - 1; a >= 0; a--) {
			o << r[a];
		}
	}
	else {
		o << "00";
	}
	s = o.str();
	cout << s << endl ;
	return s;
}




