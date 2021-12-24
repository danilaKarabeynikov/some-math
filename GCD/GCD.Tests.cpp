#include "pch.h"
#include "../Pz2Karabejnikov/GCD.h"



TEST(GCDTests, DefineGCDOfSomeNumbers)
{
	ASSERT_EQ(GCD(15, 5), 5);
	ASSERT_EQ(GCD(48, 60), 12);
	ASSERT_EQ(GCD(84, 112), 28);
	ASSERT_EQ(GCD(661, 113), 1);
	ASSERT_EQ(GCD(220, 600), 20);
}
TEST(RecursiveGCDTests, DefineGCDOfSomeNumbers)
{
	ASSERT_EQ(RecursiveGCD(15, 5), 5);
	ASSERT_EQ(RecursiveGCD(48, 60), 12);
	ASSERT_EQ(RecursiveGCD(84, 112), 28);
	ASSERT_EQ(RecursiveGCD(661, 113), 1);
	ASSERT_EQ(RecursiveGCD(220, 600), 20);
}
