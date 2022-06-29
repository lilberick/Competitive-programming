//https://leetcode.com/problems/sum-of-all-odd-length-subarrays
//Lang		:	C++
//Time		:	7 ms
//Memory	:	8.3 MB
#include<vector>
#include<numeric>
class Solution {
	public:
	    int sumOddLengthSubarrays(vector<int>& v){
		int r=0,j=1;
		while((2*j-1)<=v.size()){
		    for(int i=0;i<v.size() && (i+(2*j-1)<=v.size());i++){
			    r+=accumulate(v.begin()+i,v.begin()+i+(2*j-1),0);
		    }
		    j++;
	    	}
		return r;
	    }
};
