//https://leetcode.com/problems/fizz-buzz
//Lang		:	C++
//Time		:	4 ms
//Memory	:	7.8 MB
string respuesta(int n){
	string r;
	if(n%15==0) r="FizzBuzz";
	else if(n%3==0) r="Fizz";
	else if(n%5==0) r="Buzz";
	else r=to_string(n);
	return r;
}
class Solution{
public:
    vector<string> fizzBuzz(int n){
		vector<string> v;
		for(int i=1;i<=n;i++) v.push_back(respuesta(i));
		return v;
    }
};
