//https://leetcode.com/problems/convert-the-temperature/description/
//Lang		:	C++
//Time		:	3 ms
//Memory	:	6.1 MB
#include<iomanip>
#include<vector>
#include<iostream>
using namespace std;
class Solution{
	public:
	vector<double> convertTemperature(double celsius){
		vector<double> v(2);
		double kelvin=celsius+273.15;
		double fahrenheit=celsius*1.8+32.0;
		v[0]=kelvin;
		v[1]=fahrenheit;
		return v;
	}
};
