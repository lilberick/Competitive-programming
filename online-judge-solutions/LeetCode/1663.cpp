//https://leetcode.com/problems/smallest-string-with-a-given-numeric-value
//Lang		:	C++
//Time		:	202 ms
//Memory	:	21.2 MB
class Solution{
public:
    string getSmallestString(int n, int k){
		string s(n,'a');
		int j=n-1;
		k-=n;
		while(k--){
			s[j]++;
			if(s[j]=='z') j--;
		}
		return s;
    }
};
