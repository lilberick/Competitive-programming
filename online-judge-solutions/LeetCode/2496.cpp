//https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	7.8 MB
class Solution{
public:
    int maximumValue(vector<string>& v){
		int m=0;
		for(string s:v){
			bool b=false;
			for(char c:s){if(!isdigit(c)) b=true;}
			int x=s.size();
			m=b?max(m,x):max(m,stoi(s));
		}
		return m;
    }
};
