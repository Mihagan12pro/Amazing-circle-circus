#pragma once
#include"vector"
#include "MainFrm.h"
using namespace std;
class CCircle
{

	public:
		int X();
		int Y();
		int R();

		bool Collision(vector<CCircle> circles);
		CCircle(int _maxX, int _maxY, int _r);
		CCircle::CCircle(int _x, int _y, int _r, vector<CCircle>circles);
	

	private:
		int maxX, maxY;
		int r = 10;
		int x, y;
		
		

};

