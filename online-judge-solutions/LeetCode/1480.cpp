//https://leetcode.com/problems/running-sum-of-1d-array
//Lang		:	C++
//Time		:	8 ms
//Memory	:	8.5 MB
class Solution{
	public:
	    vector<int> runningSum(vector<int>& v){
		vector<int> w(1,v[0]);
		for(int i=1;i<v.size();i++){
			    w.push_back(w.back()+v[i]);
		}
		return w;
	    }
};
