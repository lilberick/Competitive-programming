//https://leetcode.com/problems/self-dividing-numbers
//Lang		:	C++
//Time		:	13 ms
//Memory	:	6.6 MB
class Solution{
public:
    vector<int> selfDividingNumbers(int l, int r){
		vector<int> w;
		for(int i=l;i<=r;i++){
			string s=to_string(i);
			int n=0;
			for(int j=0;j<s.size();j++){
				int a=stoi(string(1,s[j]));
				if(a==0 || (a!=0 && i%a!=0)) n++;
			}
			if(n==0 && i%10!=0) w.push_back(i);
		}
		return w;
    }
};
