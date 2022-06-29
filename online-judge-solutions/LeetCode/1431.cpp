//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies
//Lang		:	C++
//Time		:	8 ms
//Memory	:	8.9 MB
#include<vector>
#include<algorithm>
class Solution{
	public:
	    vector<bool> kidsWithCandies(vector<int>& v, int n){
		int m=*max_element(v.begin(),v.end());
		vector<bool> w;
		for(int x:v){
			x+n>=m ? w.push_back(true):w.push_back(false);
		}
		return w;
	    }
};
