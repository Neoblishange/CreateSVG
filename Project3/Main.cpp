#include <iostream>
#include <fstream>
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Editor.h"
#include "FigGeo.h"

using namespace std;

 ostream& operator << (std::ostream& O, Editor edit)
{
	edit.display();
	return O;
}

int main() {
	Square c2(50, { 150,150 });
	Circle c1(50, { 250,250 });
	Circle c(50, { 300,300 });
	Rectangle rec1(50, 80, {400, 250});
	Figure* pt = &c;
	cout << endl << pt->GetArea();
	
	Editor ed;
	ed.AddFG(&c);
	ed.AddFG(&c1);
	ed.AddFG(&c2);
	ed.AddFG(&rec1);
	cout << "aire total = " << ed.CalcAT() << endl;
	cout << ed << endl;
	c.SetColorFill(150, 150, 150);
	c2.SetColorFill(200, 0 , 200);
	c1.SetColorFill(80,0,0);
	rec1.SetColorFill(150, 150, 150);

	ed.ExportSVG("figures.svg");
	return 0;
}