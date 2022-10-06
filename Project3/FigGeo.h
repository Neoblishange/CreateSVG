#pragma once
#include "Point.h"
#include "RGB.h"
#include <iostream>

using namespace std;

class Figure {

private:
	Point centre;
	RGB colorFill;
	float epaisseurtrait;
	RGB clrtrait;
public:
	Figure(Point centre);
	~Figure();
	int GetX();
	int GetY();
	void SetColorFill(float R, float G, float B);
	void SetBorderSize(float ep);
	void Setclrtrait(float R, float G, float B);
	RGB GetcolorFill();
	float Getepaisseurtrait();
	RGB Getclrtrait();
	virtual float GetArea()=0 ; 
	virtual void display()=0 ;
	string Convert(int a);
	virtual string SVG()=0;
};