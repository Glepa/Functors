#pragma once
#include<iostream>
#include<algorithm>
#include<functional>
#include<iterator>

using namespace std;

template<class T1, class T2>
class Minimal {
public:
	T2 operator()(T1& cont);
};

template<class T1, class T2>
class Maximal {
public:
	T2 operator()(T1& cont);
};
template<class T>
class DescSort {
public:
	void operator()(T& cont);
};

template<class T>
class SortAscend {
public:
	void operator()(T& cont);
};

template<class T1, class T2>
class Increase {
public:
	 void operator() (T1& cont, T2 inc);
};

template<class T1, class T2>
class Decrease {
public:
	void operator() (T1& cont, T2 dec);
};

template<class T1, class T2>
class Remove {
public:
	void operator() (T1& cont, T2 del);
};
template<class T1, class T2>
T2 Minimal<T1, T2>::operator()(T1& cont)
{
	T2& min = cont.front();
	for (auto& temp : cont)
	{
		if (temp < min) min = temp;
	}
	return min;
}

template<class T1, class T2>
T2 Maximal<T1, T2>::operator()(T1& cont)
{
	T2 &max = cont.front();
	for (auto& temp : cont)
	{
		if (temp > max) max = temp;
	}
	return max;
}

template<class T>
void DescSort<T>::operator()(T&cont)
{
	stable_sort(cont.begin(), cont.end());
	reverse(cont.begin(), cont.end());
}

template<class T>
void SortAscend<T>::operator()(T& cont)
{
	stable_sort(cont.begin(), cont.end());
}

template<class T1,class T2>
void Increase<T1,T2>::operator()(T1& cont, T2 inc)
{
	
	for (auto iter = cont.begin(); iter != cont.end(); iter++) {
		*iter += inc;
	}
}

template<class T1, class T2>
void Decrease<T1, T2>::operator()(T1& cont, T2 dec)
{
	for (auto iter = cont.begin(); iter != cont.end(); iter++) {
		*iter -= dec;
	}
}

template<class T1, class T2>
void Remove<T1, T2>::operator()(T1& cont, T2 del)
{
	for (auto iter = cont.begin(); iter != cont.end();) {
		if (*iter == del) {
			cont.erase(iter);
			iter = cont.begin();
		}
		else iter++;
	}
}
template<typename T> void show(T& test) {
	cout << endl;
	for (auto temp : test)
	{
		cout << temp << ',';
	}
	cout << "\b \n";
}
template <typename T1,typename T2> void Test(T1& test,T2 n = 0) {
	Maximal <T1, T2> maximal;
	Minimal <T1, T2 > minimal;
	DescSort<T1> descsort;
	SortAscend <T1> sortascend;
	Increase <T1, T2> increase;
	Decrease<T1, T2> decrease;
	Remove<T1, T2> rem;
	show(test);
	cout << " \n Maximal: " << maximal(test) << endl;
	cout << "\n Minimal: " << minimal(test) << endl;
	descsort(test);
	show(test);
	sortascend(test);
	show(test);
	increase(test, n);
	show(test);
	decrease(test, 2);
	show(test);
	rem(test, n);
	show(test);
}