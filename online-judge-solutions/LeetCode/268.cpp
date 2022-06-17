//https://leetcode.com/problems/missing-number
//Lang		:	C++
//Time		:	34 ms
//Memory	:	18 MB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    int missingNumber(vector<int>& nums){
		    sort(nums.begin(),nums.end());
		    int n=0,e=-1;
		    bool termina=false;
		    for(int i=0;i<nums.size() && termina==false;i++){
			    if(nums[i]!=n){e=n;termina=true;}
			    n++;
		    }
		    if(e==-1) e=nums.size();
		    return e;
	    }
};
