#include "stdafx.h"
#include "GCD.h"


int GCD(int a, int b)
{
	if (a%b !=0)
	{
		do
		{
			int mediator = b;
			b = a % b;
			a = mediator;

		} 
		while (a%b != 0);
	}
	return b;
}
int RecursiveGCD(int a, int b)
{

	return RecursiveGCD(a, b, 1);
}

int RecursiveGCD(int a, int b, int k)
{


	if (a == 0)
	{

		return(k * b);
	}
	else
	{
		if (b == 0)
		{
			return (k * a);
		}
		else
		{
			if (a == b)
			{
				return k * a;
			}

			else
			{
				if ((a == 1) || (b == 1))
				{
					return (k * 1);
				}
				else if ((a % 2 == 0) && (b % 2 == 0))
				{
					k *= 2;
					return RecursiveGCD(a / 2, b / 2, k);
				}
				else if ((a % 2 == 0) && (b % 2 != 0))
				{
					return RecursiveGCD(a / 2, b, k);
				}
				else if ((b % 2 == 0) && (a % 2 != 0))
				{
					return RecursiveGCD(a, b / 2, k);
				}
				else if (((b % 2 != 0) && (a % 2 != 0)) && (a > b))
				{
					return RecursiveGCD((a - b) / 2, b, k);
				}
				else if (((b % 2 != 0) && (a % 2 != 0)) && (a < b))
				{
					return RecursiveGCD((b - a) / 2, a, k);
				}

			}
		}
	}
	return 0;

}