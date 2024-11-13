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
	
		void Move(int x2, int y2,vector<CCircle>&circles,int index);


		void Serialize(CArchive& ar);
		
		//virtual ~CCircle();
		
	private:
		bool Collision(int x2, int y2, vector<CCircle>& circles,int index);
		int maxX, maxY;
		int r = 10;
		int x, y;
		
		

};

