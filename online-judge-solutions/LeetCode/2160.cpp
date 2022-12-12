//https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
//Lang		:	C++
//Time		:	5 ms
//Memory	:	6 MB
class Solution {
	public:
		int minimumSum(int num){
			string s=to_string(num);
			sort(begin(s),end(s));
			string s1=string(1,s[0])+string(1,s[2]);
			string s2=string(1,s[1])+string(1,s[3]);
			int n1=stoi(s1);
			int n2=stoi(s2);
			return n1+n2;
		}
};
