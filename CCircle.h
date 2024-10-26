#pragma once
#include"vector"
using namespace std;
class CCircle
{
public:
	int X, Y;

	int R();

	bool Collision();

	CCircle(int _X,int _Y,int _r);

	static CCircle AddNewCircle(CCircle circle);

private:

	int r;

	static vector<CCircle> circles;



};

