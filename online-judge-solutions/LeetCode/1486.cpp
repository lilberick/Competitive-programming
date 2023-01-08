//https://leetcode.com/problems/xor-operation-in-an-array/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution{
	public:
		int xorOperation(int n, int start){
			int x=0;
			for(int i=0;i<n;i++) x^=(start+2*i);
			return x;
		}
};
