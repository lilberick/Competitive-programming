//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.8 MB
class Solution{
	public:
	    int subtractProductAndSum(int n){
		    string t=to_string(n);
		    int s=0,p=1;
		    for(char x:t){
			    s+=x-48;
			    p*=x-48;
		    }
		    return p-s;
	    }
};
