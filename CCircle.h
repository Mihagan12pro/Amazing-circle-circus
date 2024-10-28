#pragma once
#include"vector"
using namespace std;
class CCircle
{
public:
	int X();
	int Y();

	int R();

	bool Collision();

	CCircle(int _x,int _y,int _r);

	static CCircle AddNewCircle(CCircle circle);

private:

	int r;
	int x, y;
	



};

