#include <iostream>
#include <string>
using namespace std;
class Ulke{
	string baskent,plaka,dil;
	long nufus;
	int telkod;
	Ulke (string _b,string _p):b(_b),p(_p){}
	Ulke (){}
	Ulke (string _b):b(_b){}
	Ulke (long _n):n(_n){}
	Ulke(string _b,string _p,string _d):b(_b),p(_p),d(_d){}
	Ulke (int _t):t(_t){}
};
