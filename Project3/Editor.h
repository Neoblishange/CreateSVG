#pragma once
#include "FigGeo.h"
#include "Square.h"
#include <list>
#include <iterator>
#include <iostream>

using namespace std;

class Editor {
private:
	list<Figure*> l;
	Square viewport;
	float AT;
public:
	Editor();
	~Editor();
	void AddFG(Figure*);
	float CalcAT();
	void display() {
		auto it = l.begin();
		for (it ; it != l.end(); it++) {
			(*it)->display();
			cout<<"aire = "<<(*it)->GetArea()<<endl;
		}
	}
	void ExportSVG(string);
};