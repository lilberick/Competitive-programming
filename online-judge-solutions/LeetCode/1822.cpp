//https://leetcode.com/problems/sign-of-the-product-of-an-array
//Lang		:	C++
//Time		:	13 ms
//Memory	:	10.3 MB
#include<vector>
#include<algorithm>
int signo(int x){
	if(x<0) return -1;
	if(x>0) return 1;
	return 0;
}
class Solution{
	public:
	    int arraySign(vector<int>& v){
		    int p=1;
		    if(find(v.begin(),v.end(),0)!=v.end()) return 0;
		    else{
			    for(int x:v) p*=signo(x);
		    }
		    return p;
	    }
};
