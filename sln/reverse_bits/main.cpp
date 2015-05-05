#include <iostream>  
#include <stdlib.h>  
#include <set>  
#include <gtest/gtest.h>
#include "sln.h"
using namespace std; 


TEST(FooTest, HandleNoneZeroInput)
{
	Solution a;
	uint32_t count = a.reverseBits(43261596);
	EXPECT_EQ(964176192, count);
}
