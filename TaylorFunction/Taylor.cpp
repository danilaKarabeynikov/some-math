#include "stdafx.h"
#include "Taylor.h"
#include <math.h>

double  Taylor(double x, double accuracy)

{
	static int n = 0;
	double RowMember = 1;
	double Sum = 0;
	n = 0;

	while (fabs(RowMember) >= accuracy)
	{

		Sum += RowMember;
		++n;
		RowMember *= (-(x*x) / n);
	}
	return Sum;

}