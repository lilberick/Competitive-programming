//https://leetcode.com/problems/check-if-word-equals-summation-of-two-words
//Lang		:	C++
//Time		:	0 ms
//Memory	:	5.8 MB
string stn(string a){
	string s;
	for(int i=0;i<a.size();i++){
		s+=a[i]-49;
	}
	return s;
}
class Solution{
	public:
	    bool isSumEqual(string a, string b, string s){
		    if( stoi(stn(a)) + stoi(stn(b)) == stoi(stn(s))) return true;
		    return false;
	    }
};
