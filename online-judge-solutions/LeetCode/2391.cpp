//https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/
//Lang		:	C++
//Time		:	298 ms
//Memory	:	105.8 MB
class Solution{
	public:
		int garbageCollection(vector<string>& g, vector<int>& t){
			int nM=0,nG=0,nP=0,xM=0,xG=0,xP=0,s=0;
			vector<int> u;
			u.push_back(0);
			for(int i=0;i<t.size();i++){
				s+=t[i];
				u.push_back(s);
			}
			for(int i=0;i<g.size();i++){
				for(int j=0;j<g[i].size();j++){
					if(g[i][j]=='M') xM=i;
					else if(g[i][j]=='G') xG=i;
					else if(g[i][j]=='P') xP=i;
				}
				nM+=count(begin(g[i]),end(g[i]),'M');
				nG+=count(begin(g[i]),end(g[i]),'G');
				nP+=count(begin(g[i]),end(g[i]),'P');
			}
			return (nM+nG+nP+u[xM]+u[xG]+u[xP]);
		}
};
