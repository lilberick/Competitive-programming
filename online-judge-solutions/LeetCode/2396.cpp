//https://leetcode.com/problems/strictly-palindromic-number/
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6 MB
class Solution{
	public:
		string Nbase(int n,int b){
			string s;
			while(n>0){
				s+=to_string(n%b);
				n/=b;
				reverse(begin(s),end(s));
			}
			return s;
		}
		bool palindromic(string s){
			bool b=true;
			for(int i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-i-1]) b=false;
			return b;
		}
		bool isStrictlyPalindromic(int n){
			bool b=true;
			for(int i=2;i<n-1 && b==true;i++){
				b=palindromic(Nbase(n,i));
			}
			return b;
		}
};
