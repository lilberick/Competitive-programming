//https://leetcode.com/problems/happy-number
//Lang		:	C++
//Time		:	7 ms
//Memory	:	5.8 MB
int feliz(int n){
	string s=to_string(n);
	int suma=0;
	for(char x:s){
		suma+=(x-48)*(x-48);
	}
	if(suma==1) return 1;
	else if(n==145) return 145;
	return feliz(suma);
}
class Solution{
	public:
		bool isHappy(int n){
			if(feliz(n)==145) return false;
			return true;
		}
};
