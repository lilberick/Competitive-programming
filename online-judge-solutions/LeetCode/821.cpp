//https://leetcode.com/problems/shortest-distance-to-a-character
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6.8 MB
class Solution{
public:
    vector<int> shortestToChar(string s,char c){
		vector<int> v,w;
		for(int i=0;i<s.size();i++) if(s[i]==c) v.push_back(i);
		for(int i=0;i<s.size();i++){
			int m=1e5;
			for(int j:v) m=min(m,abs(j-i));
			w.push_back(m);
		}
		return w;
    }
};
