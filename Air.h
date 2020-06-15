#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Air
{
private:
	string pt;
	int n;
	string type;

public:
	Air(string p, int n, string t);
 bool operator>(const Air& a);
 bool operator<(const Air& a);
 bool operator<=(const Air& a);
 bool operator>=(const Air& a);
 bool operator==(const Air& a);
 bool operator!=(const Air& a);

	
	Air(const Air& A) :pt(A.pt), n(A.n), type(A.type) { cout << " copy construct "; }
	Air();
	
	friend ostream& operator<<(ostream& os, Air& a) {
		return os << a.pt<< " " << a.n << " " << a.type << "\n";
	}
	friend istream& operator>>(istream& os, Air& a) {

		return os >> a.pt >> a.n >> a.type;
	}

	Air& operator=(const Air& A);
	Air& operator=(const string& A);


	friend class sort;
};

