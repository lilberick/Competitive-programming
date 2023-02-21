//https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced
//Lang		:	C++
//Time		:	169 ms
//Memory	:	31.3 MB
class Solution{
public:
    int minSwaps(string s){
		int l=0,r=0;
		for(char c:s){
			if(c=='[') l++;
			if(c==']'){
				r++;
				if(l>0){l--;r--;}
			}
		}
		return (r+1)/2;
    }
};
