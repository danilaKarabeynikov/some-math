#include "pch.h"
#include "../Pz2Karabejnikov/Taylor.h"

TEST(TaylorTests, TestMyFuncWithStandartLibsFuncs)
{
	double dx = 0.2;
	double a  = 1 ;
	double b = 2;

	for (size_t i = 0; i <= ((b - a) / dx); ++i)
	{
		ASSERT_NEAR(Taylor(a + i * dx, 0.00000000001), exp(-((a + i * dx)*(a + i * dx))),0.0000001);
	}
}


/* !!TABLE OUTPUT!! COPY THIS CODE in the new WindowsConsoleAPP Project !!! */

/*
#include "pch.h"
#include <iostream>
#include <math.h>


using namespace std;
static int n = 0;
double  Taylor(double  x, double accuracy);

int PrintTylor()
{
	double dx;
	double a;
	double b;

	cout << "Enter dx: " << endl;
	cin >> dx;

	cout << "Enter LowerBound (a) : " << endl;
	cin >> a;

	cout << "Enter UpperBound (b) : " << endl;
	cin >> b;


	cout << endl;
	cout << "_________________________________________________________________________________" << endl << "|\tx\t|\tF(x)\t\t|\tn\t|\EXP(-x^2)\t\t|" << endl << "---------------------------------------------------------------------------------" << endl;

	for (size_t i = 0; i <= ((b - a) / dx); i++)
	{
		cout << "|\t" << a + i * dx << "\t|\t" << Taylor(a + i * dx, 0.00000000001) << "\t|\t" << n << "\t|\t" << exp(-((a + i * dx)*(a + i * dx))) << "\t|" << endl;
	}

	cout << "---------------------------------------------------------------------------------" << endl;


	system("pause");
}

double  Taylor(double x, double accuracy)

{
	double RowMember = 1;
	double Sum = 0;
	n = 0;

	while (fabs(RowMember) >= accuracy)
	{

		Sum = Sum + RowMember;
		++n;
		RowMember = RowMember * (-(x*x) / n);
	}
	return Sum;

}*/