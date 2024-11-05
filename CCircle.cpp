#include "pch.h"
#include "CCircle.h"
#include<vector>
#include<random>
#include "MainFrm.h"

using namespace std;

CCircle::CCircle(int _x, int _y, int _r,bool isOpen)
{
	if (isOpen)
	{
		x = _x;
		y = _y;
	}
	else
	{
		int maxY = _y;
		int maxX = _x;
		std::random_device random_device; // Источник энтропии.
		std::mt19937 generator(random_device()); // Генератор случайных чисел.

		std::uniform_int_distribution<> distributionX(20, maxX - 20);
		std::uniform_int_distribution<> distributionY(20, maxY - 20);

		x = distributionX(generator);
		y = distributionY(generator);
	}

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