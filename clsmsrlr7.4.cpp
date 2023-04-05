#include <iostream>
#include <string>
using namespace std;
class Tarih{
	int gun,ay,yil;
	public:
		Tarih(int _gun =1,int _ay=1,int _yil=2012):gun(_gun),ay(_ay),yil(_yil){}
		int arttir();
		int goster();
};
int Tarih::arttir(){
	int aylar[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	gun++;
	if(gun > aylar[ay-1]){
		gun = 1;
		ay++;
	}
	if(ay > 12){
		ay = 1;
		yil++;
	}
}
int Tarih::goster(){
	cout << gun << ":" << ay << ":" << yil << " "<<endl;
}
int main(){
	int aylar[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	Tarih tarih(30,7);
	cout << "Bugun: ";
	tarih.goster();
	cout << "Onumuzdeki 10 Gun: "<<endl;
	for(int i=0; i<10; i++){
		tarih.arttir();
		tarih.goster();
	}
	return 0;
}

