#include <bitset>
typedef unsigned int  uint32_t;

class Solution {
public:
	uint32_t reverseBits(uint32_t n) 
	{
		std::bitset<32> a(n);

		std::bitset<32> reversed(0);

		int isize = a.size();

		for (int i = 0; i < isize; ++i)
		{
			reversed[isize-1-i] = a[i];
		}

		return reversed.to_ulong();
	}
};
