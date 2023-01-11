//https://leetcode.com/problems/count-of-matches-in-tournament
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.1 MB
class Solution{
public:
	int numberOfMatches(int n){
		int s=0;
		while(n!=1){
			s+=n/2;
			n=ceil(n/2.0);
		}
		return s;
	}
};
