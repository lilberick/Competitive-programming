//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.7 MB
class Solution{
	public:
	    int countOdds(int low, int high){
		if(low%2==0 && high%2==0) return (high-low)/2;
		return (high-low)/2+1;
	    }
};
