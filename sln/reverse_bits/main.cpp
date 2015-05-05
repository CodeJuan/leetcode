#include <iostream>  
#include <stdlib.h>  
#include <set>  
#include <gtest/gtest.h>
#include "sln.h"
using namespace std; 


TEST(FooTest, HandleNoneZeroInput)
{
	Solution a;
	int count = a.hammingWeight(1);
	EXPECT_EQ(1, count);
}
