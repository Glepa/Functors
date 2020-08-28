#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Minimal {
public:
	int operator()(vector<int>& vec);
};

class Maximal {
public:
	int operator()(vector<int>& vec);
};

class DescSort {
public:
	void operator()(vector<int>& vec);
};
class SortAscend {
public:
	void operator()(vector<int>& vec);
};

class Increase {
public:
	void operator() (vector<int>& vec, int inc);
};
class Decrease {
public:
	void operator() (vector<int>& vec, int dec);
};

class Remove {
public:
	void operator() (vector<int>& vec, int del);
};


int TestVector();