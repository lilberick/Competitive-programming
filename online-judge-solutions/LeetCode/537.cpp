//https://leetcode.com/problems/complex-number-multiplication
//Lang		:	C++
//Time		:	0 ms
//Memory	:	6.1 MB
class Solution{
public:
    string complexNumberMultiply(string n1,string n2){
		int r1,i1,r2,i2;
		char m;
		stringstream sin1(n1),sin2(n2);
		sin1>>r1>>m>>i1;
		sin2>>r2>>m>>i2;
		return to_string(r1*r2-i1*i2)+"+"+to_string(r1*i2+r2*i1)+"i";
	}
};
