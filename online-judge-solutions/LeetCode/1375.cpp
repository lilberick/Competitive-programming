//https://leetcode.com/problems/number-of-times-binary-string-is-prefix-aligned
//Lang		:	C++
//Time		:	65 ms
//Memory	:	38.5 MB
class Solution{
public:
    int numTimesAllBlue(vector<int>& f){
		int r=0,j=0,x=0;
		for(int i:f){
			x++;
			j=max(i,j);
			if(j==x) r++;
		}
		return r;
    }
};
