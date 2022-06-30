//https://leetcode.com/problems/flipping-an-image
//Lang		:	C++
//Time		:	5 ms
//Memory	:	8.9 MB
class Solution{
	public:
	    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v){
		for(int i=0;i<v.size();i++){
		    reverse(v[i].begin(),v[i].end());
		    for_each(v[i].begin(), v[i].end(), [](int &n){ n=1-n; });
		}
		return v;
	    }
};
