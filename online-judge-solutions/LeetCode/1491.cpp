//https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary
//Lang		:	C++
//Time		:	0 ms
//Memory	:	7.2 MB
#include<vector>
#include<algorithm>
#include<numeric>
class Solution{
	public:
	    double average(vector<int>& v){
		    int n=v.size();
		    sort(v.begin(),v.end());
		    double s=accumulate(v.begin()+1,v.begin()+n-1,0);
		    return s/(n-2);
	    }
};
