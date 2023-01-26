//https://leetcode.com/problems/sum-of-digits-in-base-k
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.1 MB
string Nbase(int n,int b){
	string s;
	while(n>0){
		s+=to_string(n%b);
		n/=b;
		reverse(begin(s),end(s));
	}
	return s;
}
class Solution {
public:
    int sumBase(int n, int k) {
       	string s=Nbase(n,k);
	    int r=0;
	    for(char c:s) r+=c-'0'; 
        return r;
    }
};
