//https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/
//Lang		:	C++
//Time		:	325 ms
//Memory	:	66.3 MB
class Solution{
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p){
		sort(begin(p),end(p));
		int m=0;
		for(int i=1;i<p.size();i++) m=max(m,p[i][0]-p[i-1][0]);
		return m;
    }
};
