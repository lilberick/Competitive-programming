//https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/
//Lang		:	C++
//Time		:	777 ms
//Memory	:	27.5 MB
class Solution {
public:
    vector<int> executeInstructions(int n,vector<int>& v,string s){
		vector<int> a;
		int z=s.size();
		for(int i=0;i<z;i++){
			string w=s;
			vector<int> u(v);
			int x=0;
			while(w.size() && u[0]>=0 && u[0]<n && u[1]>=0 && u[1]<n){
				if(w[0]=='R' && u[1]<n-1){u[1]++;x++;}
				else if(w[0]=='L' && u[1]>=1){u[1]--;x++;}
				else if(w[0]=='U' && u[0]>=1){u[0]--;x++;}
				else if(w[0]=='D' && u[0]<n-1){u[0]++;x++;}
				else break;
				w.erase(begin(w));
			}
			a.push_back(x);
			s.erase(begin(s));
		}
		return a;
    }
};
