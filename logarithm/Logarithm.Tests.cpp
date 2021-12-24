#include "pch.h"
#include "../Pz2Karabejnikov/Logarithm.h"

TEST(LogarithmTests,PowerOfTwo)
{
	ASSERT_EQ(Logarithm(1), 0);
	ASSERT_EQ(Logarithm(64), 6);
	ASSERT_EQ(Logarithm(1024), 10);
	ASSERT_EQ(Logarithm(8), 3);
	
}

TEST(LogarithmTests, NotAPowerOfTwo)
{
	ASSERT_EQ(Logarithm(3), -1);
	ASSERT_EQ(Logarithm(7), -1);
	ASSERT_EQ(Logarithm(9), -1);
}

TEST(LogarithmTests, OutOfScope)
{
	ASSERT_EQ(Logarithm(-5), -2);
	ASSERT_EQ(Logarithm(-7), -2);
	ASSERT_EQ(Logarithm(0), -2);

}
