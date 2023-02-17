//https://leetcode.com/problems/stone-game
//Lang		:	C++
//Time		:	3 ms
//Memory	:	7.6 MB
class Solution{
public:
    bool stoneGame(vector<int>& p){
		deque<int> d(begin(p),end(p));
		int s=0;
		for(int i:p) s+=i;
		int sa=0;
		while(d.size()>0){
			sa+=max(d[0],d[d.size()-1]);
			d.pop_back();d.pop_front();
		}
		return sa>s/2;
    }
};
