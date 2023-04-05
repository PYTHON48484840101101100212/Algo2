#define PI 3.14
#include <iostream>
using namespace std;

class Silindir{
	int r;
	int h;
	public:
		Silindir(int _r,int _h):r(_r),h(_h){}
		int rAl() {return r;}
		void rAta(int _r){	r = _r;}
		float alan();
		float hacim();
};
float Silindir::alan() {
	return 2*PI*r*h + 2*PI*r*r;
}
float Silindir::hacim(){
	return PI*r*r*h;
}
int main(){
	int data,h;
	cout<<"Silindirin YariCapi ve Yuksekligini Giriniz: "<<endl;
	cin>>data>>h;
Silindir s(data,h);
float alan = s.alan();
float hacim =s.hacim();
cout<<"Alan: "<<alan<<endl;
cout<<"Hacim: "<<hacim;
return 0;
}
