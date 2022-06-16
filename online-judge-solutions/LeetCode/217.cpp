//https://leetcode.com/problems/contains-duplicate
//Lang		:	GNU C++
//Time		:	160 ms
//Memory	:	46 MB
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
	public:
		bool containsDuplicate(vector<int>& v) {
			int n1=v.size();
			sort(v.begin(),v.end());
			v.erase(unique(v.begin(),v.end()),v.end());
			int n2=v.size();
			if(n1==n2){return false;}
			else{return true;}
		}
};
