//https://leetcode.com/problems/maximum-sum-of-an-hourglass
//Lang		:	C++
//Time		:	46 ms
//Memory	:	13.2 MB
class Solution{
public:
    int maxSum(vector<vector<int>>& v){
        int m=0;
	    for(int i=0;i<v.size()-2;i++){
		    for(int j=0;j<v[i].size()-2;j++){
			    int s=v[i][j]+v[i][j+1]+v[i][j+2]+v[i+1][j+1]+v[i+2][j]+v[i+2][j+1]+v[i+2][j+2];
			    m=max(m,s);
		    }
	    }
        return m;
    }
};
