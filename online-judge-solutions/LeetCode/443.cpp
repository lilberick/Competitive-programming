//https://leetcode.com/problems/string-compression
//Lang		:	C++
//Time		:	5 ms
//Memory	:	9 MB
class Solution{
public:
    int compress(vector<char>& c){
		c.push_back('9');
		int r=0;
		string s;
		for(int i=0;i<c.size()-1;i++){
			r++;
			if(c[i]!=c[i+1]){
				s+=c[i]+(r==1?"":to_string(r));
				r=0;
			}
		}
		vector<char> v(begin(s),end(s));
		c=v;
		return s.size();
    }
};
