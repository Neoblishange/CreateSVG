#pragma once

class Point {

public:
	int x, y;
	Point() : x(0), y(0) {};
	Point(int x, int y);
	~Point();
};