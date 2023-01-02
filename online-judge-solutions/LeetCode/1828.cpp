//https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
//Lang		:	C++
//Time		:	201 ms
//Memory	:	16.4 MB
class Solution{
	public:
		vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q){
			vector<int> a;
			for(int i=0;i<q.size();i++){
				int r=0;
				for(int j=0;j<p.size();j++){
					if(q[i][2]>=hypot(q[i][0]-p[j][0],q[i][1]-p[j][1])) r++;
				}
				a.push_back(r);
			}
			return a;
		}
};
