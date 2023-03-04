//https://leetcode.com/problems/palindromic-substrings
//Lang		:	C++
//Time		:	567 ms
//Memory	:	456.2 MB
class Solution{
public:
    int countSubstrings(string s){
		int r=0;
    	int n=s.size(),k=0;
    	for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				string a=s.substr(i,j-i+1);
				if(equal(begin(a),begin(a)+a.size()/2,a.rbegin())) r++;
			}
		}
		return r;
    }
};
