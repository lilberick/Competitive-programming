//https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
//Lang		:	C++
//Time		:	109 ms
//Memory	:	23.2 MB
class Solution{
public:
    int numberOfBeams(vector<string>& v){
		vector<int> w;
		for(int i=0;i<v.size();i++){
			int n=count(begin(v[i]),end(v[i]),'1');
			if(n!=0) w.push_back(n);
		}
		if(v.size()==1 || w.size()==0) return 0;
		else{
			int s=0;
			for(int i=0;i<w.size()-1;i++) s+=w[i]*w[i+1];
			return s;
		}
    }
};
