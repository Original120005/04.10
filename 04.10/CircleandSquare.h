#pragma once
#include <iostream>
#include "Square.h"
#include "Circle.h"
using namespace std;

class CircleandSquare : private Square, private Circle {


public:
	CircleandSquare(int square, int circle) : Square(square), Circle(circle) {
		if (circle >= square) {
			cout << "Wrong" << endl;
			Circle(circle) = 0;
		}
		else if (circle < square) {
			cout << "Right" << endl;
		}
	}

	void Print() {
		this->PrintSquare();
		this->PrintCircle();
	}


};
