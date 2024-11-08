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

		static bool Collision(CCircle circle, int _x, int _y, int _r);
		CCircle(int _x, int _y, int _r);
	
		



		
	

	private:
		int maxX, maxY;
		int r = 10;
		int x, y;
		
		

};

