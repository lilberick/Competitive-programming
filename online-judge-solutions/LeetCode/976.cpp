//https://leetcode.com/problems/largest-perimeter-triangle
//Lang		:	C++
//Time		:	46 ms
//Memory	:	21.7 MB
#include<vector>
#include<algorithm>
class Solution{
	public:
	    int largestPerimeter(vector<int>& v){
		    sort(v.begin(),v.end(),greater<int>());
		    for(int i=0;i<v.size()-2;i++){
			    if(v[i]<(v[i+1]+v[i+2])) return (v[i]+v[i+1]+v[i+2]);
		    }
		    return 0;
	    }
};
