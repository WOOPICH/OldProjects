#pragma once
#include <vector>
#include <ostream>
using namespace std;

class Digit
{
public:
	Digit();
	Digit(vector <int> array);
	void set_array();
	vector<int> get_array();
	bool isinclude(int a);
	bool isinclude_2();
	void include();
	~Digit();
	Digit operator||(Digit& v);
	bool operator==(Digit& v);
private:
	vector <int> Array;
	friend ostream &operator<<(ostream &os, Digit v);
	int N;
	int a;
	int len;
	int count = 0;
};

