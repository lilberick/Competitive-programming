//https://leetcode.com/problems/number-of-1-bits
//Lang		:	C++
//Time		:	5 ms
//Memory	:	6.1 MB
class Solution{
	public:
	    int hammingWeight(uint32_t n){
		    return __builtin_popcount(n);
	    }
};
