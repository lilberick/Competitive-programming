//https://leetcode.com/problems/count-asterisks
//Lang		:	C++
//Time		:	5 ms
//Memory	:	6.4 MB
class Solution{
public:
	int countAsterisks(string s){
		int n=0,b=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='|') b=1-b;
			if(!b && s[i]=='*') n++;
		}
		return n;
	}
};
