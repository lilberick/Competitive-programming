//leetcode.com/problems/decode-the-message/
//Lang		:	C++
//Time		:	13 ms
//Memory	:	7 MB
class Solution{
	public:
		string decodeMessage(string k,string message){
			map<char,char> m;
			m[' ']=' ';
			int c=0;
			for(int i=0;i<k.size();i++) if(isalpha(k[i]) && m.count(k[i])==0){m[k[i]]=char(c+97);c++;}
			string r;
			for(char x:message){r+=m[x];}
			return r;
		}
};
