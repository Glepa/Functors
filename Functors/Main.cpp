//#include "Functors.h"
#include"FunctorsTemplate.h"
#include<vector>
#include<cstdlib>
#include<ctime>
#include<array>
#include<list>


int main() {
	list<int>Ls{22,34,48,16,25,10,10};
	int n = 34;
	Test(Ls, n);
	vector<double> vec{ 2.3,22.3,16.5,44.4,1.0 };
	double m = 16.5;
	Test(vec, m);
	//TestVector();
	return 0;
}