#include "pch.h"
#include "CCircle.h"
#include<vector>
#include<random>
#include "MainFrm.h"


#define COLLISION true
#define NO_PROBLEMS false
using namespace std;

//IMPLEMENT_SERIAL(CCircle, CObject, VERSIONABLE_SCHEMA)

CCircle::CCircle(int _x, int _y, int _r)
{
	x = _x;
	y = _y;
	r = _r;
}




int CCircle::R()
{
	return r;
}

int CCircle::X()
{
	return x;
}
int CCircle::Y()
{
	return y;
}

bool CCircle::Collision(CCircle circle,int _x,int _y,int _r)
{
	if (abs(circle.X() - _x) > _r && abs(circle.Y() - _y) > _r)
		return NO_PROBLEMS;
	
	return COLLISION;

}

void CCircle::Move(int x2, int y2,  vector<CCircle>& circles,int index)
{
	if (Collision(x2, y2, circles,index) == NO_PROBLEMS)
	{
		x = x2;
		y = y2;
	}
	
}
bool CCircle::Collision(int x2, int y2, vector<CCircle>& circles,int index)
{
	for (int i = 0; i < circles.size();i++)
	{
		if (abs(circles[i].X() - x2) <= r && abs(circles[i].Y() - y2) <= r && index != i)
			return COLLISION;

	}
	
	return NO_PROBLEMS;
}