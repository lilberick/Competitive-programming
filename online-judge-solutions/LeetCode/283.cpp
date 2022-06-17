//https://leetcode.com/problems/move-zeroes
//Lang		:	C++
//Time		:	88 ms
//Memory	:	19.2 MB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
	public:
	    void moveZeroes(vector<int>& nums) {
		int n=nums.size();
		nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
		int n0=nums.size();
		vector<int> v; v.assign(n-n0,0);
		nums.insert(nums.end(),v.begin(),v.end());
		for(int x:nums){cout<<x<<endl;}
	    }
};
