#include "pch.h"
#include "CCircle.h"
#include<vector>
using namespace std;
CCircle::CCircle(int _x, int _y,int _r)
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