//https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three
//Lang		:	C++
//Time		:	5 ms
//Memory	:	6 MB
class Solution{
public:
    bool checkPowersOfThree(int n){
		bool b=true;
		while(n>0 && b){
			cout<<n%3<<endl;
			if(n%3>1) b=false;
			n/=3;
		}
		return b;
    }
};
