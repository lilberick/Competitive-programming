//https://leetcode.com/problems/smallest-even-multiple/
//Lang		:	C++
//Time		:	3 ms
//Memory	:	5.9 MB
class Solution{
	public:
		int smallestEvenMultiple(int n){
			return (n%2==0)?n:n*2;
		}
};
