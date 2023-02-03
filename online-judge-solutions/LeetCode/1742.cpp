//https://leetcode.com/problems/maximum-number-of-balls-in-a-box
//Lang		:	C++
//Time		:	180 ms
//Memory	:	6.1 MB
class Solution{
public:
    int countBalls(int l,int h){
		map<int,int> m;
		for(int i=l;i<=h;i++){
			string s=to_string(i);
			int n=0;
			for(char c:s) n+=c-'0';
			m[n]++;
		}
		int r=0;
		for(auto i=m.begin();i!=m.end();i++) r=max(r,i->second);
		return r;
    }
};
