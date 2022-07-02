//https://leetcode.com/problems/minimum-time-visiting-all-points
//Lang		:	C++
//Time		:	13 ms
//Memory	:	10.2 MB
class Solution{
	public:
	    int minTimeToVisitAllPoints(vector<vector<int>>& v){
		    int d=0;
		    for(int i=0;i<v.size()-1;i++){
			    d+=max(abs(v[i][0]-v[i+1][0]),abs(v[i][1]-v[i+1][1]));
		    }
		    return d;
	    }
};
