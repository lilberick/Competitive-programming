//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters
//Lang		:	C++
//Time		:	188 ms
//Memory	:	26.4 MB
class Solution{
public:
    int countCharacters(vector<string>& w,string c){
		map<char,int> m,n;
		for(char i:c) m[i]++;
		int s=0;
		for(string i:w){
			n=m;
			bool b=true;
			for(char j:i){
				if(n[j]==0) b=false;
				else n[j]--;
			}
			if(b) s+=i.size();
		}
		return s;
    }
};
