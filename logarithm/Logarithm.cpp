#include "stdafx.h"
#include "Logarithm.h"


int Logarithm(int x)
{
	int Determinant = 1;

	int deg = 0;

	if (x > 0)
	{
		
		while (Determinant < x)
		{
			Determinant = Determinant * 2;
			++deg;
		}
		
		if (x == Determinant)
		{
			return deg ;
		}
		else
		{
			return -1; 
		}
	}
	else
	{
		return -2;
	}
}