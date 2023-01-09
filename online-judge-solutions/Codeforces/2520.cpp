//htts://leetcode.com/problems/count-the-digits-that-divide-a-number
//Lang		:	C++
//Time		:	3 ms
//Memory	:	5.9 MB
class Solution{
	public:
		int countDigits(int n){
			string s=to_string(n);
			int r=0;
			for(int i=0;i<s.size();i++){
				if(n%stoi(string(1,s[i]))==0) r++;
			}
			return r;
		}
};
