//https://leetcode.com/problems/matrix-diagonal-sum
//Lang		:	C++
//Time		:	25 ms
//Memory	:	11.3 MB
class Solution{
	public:
	    int diagonalSum(vector<vector<int>>& v){
		int n=v.size();
		int d=0;
		for(int i=0;i<n;i++){
		    d+=v[i][i]+v[i][n-i-1];
		}
		if(n%2!=0) d-=v[n/2][n/2];
		return d;
	    }
};
