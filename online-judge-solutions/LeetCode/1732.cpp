//https://leetcode.com/problems/find-the-highest-altitude/
//Lang		:	C++
//Time		:	6 ms
//Memory	:	8 MB
class Solution{
public:
    int largestAltitude(vector<int>& v){
		int s=0,m=0;
		for(int i:v){
			s+=i;
			m=max(m,s);
		}
		return m;
    }
};
