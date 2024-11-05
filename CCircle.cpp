#include "pch.h"
#include "CCircle.h"
#include<vector>
#include<random>
#include "MainFrm.h"

#define COLLISION true
#define NO_PROBLEMS false
using namespace std;

CCircle::CCircle(int _x, int _y, int _r)
{
	x = _x;
	y = _y;
	r = _r;
}
CCircle::CCircle(int _x, int _y, int _r, vector<CCircle>circles)
{
	int maxY = _y;
	int maxX = _x;
	std::random_device random_device; // Источник энтропии.
	std::mt19937 generator(random_device()); // Генератор случайных чисел.

	std::uniform_int_distribution<> distributionX(20, maxX - 20);
	std::uniform_int_distribution<> distributionY(20, maxY - 20);

	x = distributionX(generator);
	y = distributionY(generator);
	r = _r;

	bool whatHappend = Collision(circles);

	while (whatHappend == COLLISION)
	{
		std::random_device random_device2; // Источник энтропии.
		std::mt19937 generator2(random_device2()); // Генератор случайных чисел.

		std::uniform_int_distribution<> distribution2X(20, maxX - 20);
		std::uniform_int_distribution<> distribution2Y(20, maxY - 20);

		x = distribution2X(generator2);
		y = distribution2Y(generator2);

		whatHappend = Collision(circles);

		if (whatHappend == NO_PROBLEMS)
		{
			break;
		}
	}
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

bool CCircle::Collision(vector<CCircle>circles)
{
	if (circles.size() < 1)
		return NO_PROBLEMS;
	bool result;

	for (int i = 0; i < circles.size(); i++)
	{
	/*	if (abs(circles[i].X() - x) < r || abs(circles[i].Y() - y) < r)
		{
			return COLLISION;
		}*/
		if (abs(circles[i].X() - x) > r && abs(circles[i].Y() - y) > r)
			result = NO_PROBLEMS;
		else
			return COLLISION;

	}
	return result;
}
