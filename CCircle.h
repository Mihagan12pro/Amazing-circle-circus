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
		CCircle(int _x, int _y, int _r, vector<CCircle>circle);
		CCircle();



		void Serialize(CArchive& archive);
	

	private:
		int maxX, maxY;
		int r = 10;
		int x, y;
		
		

};

