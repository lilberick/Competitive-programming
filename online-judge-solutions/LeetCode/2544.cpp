//https://leetcode.com/problems/alternating-digit-sum
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.9 MB
class Solution{
public:
    int alternateDigitSum(int n){
        string s=to_string(n);
        int r=0;
        for(int i=0;i<s.size();i++) r+=i%2==0?s[i]-'0':-s[i]+'0';
        return r;
    }
};
