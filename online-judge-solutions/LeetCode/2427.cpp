//https://leetcode.com/problems/number-of-common-factors/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.8 MB
class Solution{
public:
    int commonFactors(int a, int b){
		int r=0;
		if(a<b) swap(a,b);
		for(int i=1;i<=b;i++) if(a%i==0 && b%i==0) r++;
		return r;
    }
};
