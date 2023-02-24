//https://leetcode.com/problems/number-complement
//Lang		:	C++
//Time		:	4 ms
//Memory	:	6.1 MB
class Solution{
public:
    int findComplement(int n){
		string s=bitset<32>(n).to_string(),t;
		bool b=false;
		for(char c:s){
			if(c=='1') b=true;
			if(b) t+=c;
		}
		for(int i=0;i<t.size();i++) t[i]=t[i]=='1'?'0':'1';
		bitset<32> d(t);
		int r=d.to_ulong();
		return r;
    }
};
