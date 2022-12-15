//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6 MB
class Solution{
	public:
		int subtractProductAndSum(int n){
			string s;s=to_string(n);
			int p=1,t=0;
			for(int i=0;i<s.size();i++){p*=(s[i]-'0');}
			for(int i=0;i<s.size();i++){t+=(s[i]-'0');}
			return p-t;
		}
};
