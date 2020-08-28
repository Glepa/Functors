#include "Functors.h"

int Minimal::operator()(vector<int>& vec)
{
    int minimal = vec[0];
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] < minimal) minimal = vec[i];
	}
    return minimal;
}

int Maximal::operator()(vector<int>& vec)
{
	int maximal = vec[0];
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] > maximal) maximal = vec[i];
	}
	return maximal;
}

void DescSort::operator()(vector<int>& vec)
{
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
}

void SortAscend::operator()(vector<int>& vec)
{
	sort(vec.begin(), vec.end());
}

void Increase::operator()(vector<int>& vec, int inc)
{
	for (size_t i = 0; i < vec.size(); i++) {
		vec[i] += inc;
	}
}

void Decrease::operator()(vector<int>& vec, int dec)
{
	for (size_t i = 0; i < vec.size(); i++) {
		vec[i] -= dec;
	}
}

void Remove::operator()(vector<int>& vec, int del)
{
	for (size_t i = 0; i < vec.size(); i++) {
		if(vec[i] == del) vec.erase(vec.begin()+i);
	}
}
