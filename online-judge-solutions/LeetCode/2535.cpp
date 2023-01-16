//https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
//Lang		:	C++
//Time		:	28 ms
//Memory	:	15.7 MB
class Solution{
public:
    int differenceOfSum(vector<int>& n){
		int a=accumulate(begin(n),end(n),0),b=0;
		for(int i=0;i<n.size();i++){
			string s=to_string(n[i]);
			for(int j=0;j<s.size();j++) b+=s[j]-'0';
		}
		return abs(a-b);
    }
};
