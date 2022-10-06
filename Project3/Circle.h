#pragma once
#include "FigGeo.h"
#include "Point.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Circle : public Figure {
private:
	float Ray;
public:
	Circle(float Ray, Point = { 0, 0 });
	~Circle();
	void SetRay(float Ray);
	float GetRay();
	float GetArea();
	void display();
	string SVG();
};