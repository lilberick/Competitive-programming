//https://leetcode.com/problems/fibonacci-number
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6 MB
class Solution{
	public:
	    int fib(int n){
			vector<int> v(31,0);v[1]=1;
			for(int i=2;i<31;i++) v[i]=v[i-1]+v[i-2];
			return v[n];
	    }
};

