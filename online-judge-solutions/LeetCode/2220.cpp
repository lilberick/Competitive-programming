//https://leetcode.com/problems/minimum-bit-flips-to-convert-number
//Lang		:	C++
//Time		:	4 ms
//Memory	:	5.9 MB
class Solution{
public:
	int minBitFlips(int start, int goal){
		return __builtin_popcount(start^goal);
	}
};
