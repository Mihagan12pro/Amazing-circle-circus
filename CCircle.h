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

		bool Collision();
		CCircle(int _maxX, int _maxY, int _r,bool flag);
	
	

	private:
		int maxX, maxY;
		int r = 10;
		int x, y;
		
		

};

