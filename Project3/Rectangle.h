#pragma once

#include "FigGeo.h"
#include "Point.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Rectangle : public Figure {

private:
	float length, height;
public:
	Rectangle(float _length, float _height, Point = { 0, 0 });
	~Rectangle();
	void SetLength(float length);
	void SetHeight(float height);
	float GetLength();
	float GetHeight();
	float GetArea();
	void display();
	string SVG();
};