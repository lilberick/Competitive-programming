//https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k
//Lang		:	C++
//Time		:	35 ms
//Memory	:	12.4 MB
#include<vector>
class Solution {
	public:
		int countKDifference(vector<int>& v, int k){
			int r=0;
			for(int i=0;i<v.size();i++){
				for(int j=i+1;j<v.size();j++){
					if(abs(v[i]-v[j])==k) r++;
				}
			}
			return r;
		}
};
