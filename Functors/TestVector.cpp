//#include "Functors.h"
//#include<cstdlib>
//#include<ctime>
//
//Maximal maximal;
//Minimal minimal;
//DescSort dessort;
//SortAscend sortascend;
//Increase increase;
//Decrease decrease;
//Remove rem;
//
//void show(vector<int>& vec) {
//	cout << endl;
//	for (size_t i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i] << ',';
//	}
//	cout << "\b \n";
//}
//int TestVector() {
//	srand(time(0));
//	vector<int> v(10);
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		v[i] = rand() % 20;
//	}
//	show(v);
//	increase(v, 2);
//	show(v);
//	cout << " \n Maximal: " << maximal(v) << endl;
//	cout << "\n Minimal: " << minimal(v) << endl;
//	dessort(v);
//	show(v);
//	sortascend(v);
//	show(v);
//	rem(v, 2);
//	show(v);
//	return 0;
//}