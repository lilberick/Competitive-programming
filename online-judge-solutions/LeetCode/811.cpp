//https://leetcode.com/problems/maximum-units-on-a-truck
//Lang		:	C++
//Time		:	20 ms
//Memory	:	14.3 MB
vector<string> separar(string s,char c){
	istringstream f(s);
	vector<string> v;
	string r;
	while(getline(f,r,c)) v.push_back(r);
	return v;
}
class Solution{
public:
    vector<string> subdomainVisits(vector<string>& r){
		map<string,int> m;
		for(string s:r){
			vector<string> v=separar(s,' ');
			int n=stoi(v[0]);
			v.erase(begin(v));
			for(string i:v){
				vector<string> w=separar(i,'.');
				for(int j=0;j<w.size();j++){
					string t;
					for(int k=j;k<w.size()-1;k++) t+=w[k]+".";
					t+=w[w.size()-1];
					m[t]+=n;
				}
			}
		}
		vector<string> x;
		for(auto i=m.begin();i!=m.end();i++){
			string z=to_string(i->second)+" "+i->first;
			x.push_back(z);
		}
		return x;
    }
};
