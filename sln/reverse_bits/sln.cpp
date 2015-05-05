#include "sln.h"
#include <bitset>

using namespace std;

int Solution::hammingWeight(uint32_t n) 
{
	bitset<32> a(n); 
	return (int)a.count(); 
}
