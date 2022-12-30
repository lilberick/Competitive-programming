//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution {
	public:
		int numberOfSteps(int n) {
			int p=0;
			while(n>0){
				n=(n%2==0)?n/2:n-1;
				p++;
			}
			return p;
		}
};
