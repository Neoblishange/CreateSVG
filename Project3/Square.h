#pragma once

#include "FigGeo.h"
#include "Point.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Square : public Figure {

private:
	float side;
public:
	Square(float side = 0, Point = { 0, 0 });
	~Square();
	void SetSide(float Side);
	float GetSide();
	float GetArea();
	void display();
	string SVG();
};