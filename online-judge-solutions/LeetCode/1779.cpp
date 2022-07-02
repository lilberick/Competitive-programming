//https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate
//Lang		:	C++
//Time		:	215 ms
//Memory	:	59.4 MB
#include<vector>
#include<stdlib.h>
class Solution{
	public:
	    int nearestValidPoint(int x, int y, vector<vector<int>>& v){
		    int dmin=10000,d,z=1,r=-1;
		    for(int i=0;i<v.size();i++){
			if(v[i][0]==x || v[i][1]==y){
				d=abs(v[i][0]-x)+abs(v[i][1]-y);
				dmin=min(dmin,d);
			}
		    }
		    for(int i=0;i<v.size() && z;i++){
			if((v[i][0]==x || v[i][1]==y) && dmin==(abs(v[i][0]-x)+abs(v[i][1]-y))){z=0;r=i;}
		    }
		    return r;
	    }
};
