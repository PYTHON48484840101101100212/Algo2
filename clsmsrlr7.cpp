#include <iostream>
#include <string>
using namespace std;

class YerlesimBirimi{
	string isim;
	int nufus,dogumSayisi,olumSayisi;

void isimAta(string _isim){isim=_isim;}

void nufusAta(int _nufus){nufus=_nufus;}

void dogumAta(int _dogumSayisi){dogumSayisi=_dogumSayisi;}

void olumAta(int _olumSayisi){olumSayisi=_olumSayisi;}

float dogumOrani(){
return (float)dogumSayisi/nufus;
}
float olumOrani(){
return (float)olumSayisi/nufus;
}
};
int main(){
	YerlesimBirimi Ankara,Turkiye;
	cout<<"Ankara icin Verileri Giriniz: "<<endl;
	string isim;
	int dogumSayisi,olumSayisi,nufus;
	
	cout<<"Yerlesim Birimi Ismi: "; getline(cin,isim); Ankara.isimAta(isim);
	cout<<"Nufusu Giriniz: "; cin>>nufus; Ankara.nufusAta(nufus);
	cout<<"Dogum Sayisini Giriniz: "; cin>>dogumSayisi; Ankara.dogumAta(dogumSayisi);
	cout<<"Olum Sayisini Giriniz: ";cin>>olumSayisi; Ankara.olumAta(olumSayisi);
	cout<<"Dogum Oranini Giriniz: "; Ankara.dogumOrani();<<endl;
	cout<<"Olum Oranini Giriniz: ";Ankara.olumOrani();<<endl,
	
		cout<<"Turkiye icin Verileri Giriniz: "<<endl;
		
	cout<<"Yerlesim Birimi Ismi: "; cin>>ignore(); getline(cin,isim); Turkiye.isimAta(isim);
	cout<<"Nufusu Giriniz: "; cin>>nufus; Turkiye.nufusAta(nufus);
	cout<<"Dogum Sayisini Giriniz: "; cin>>dogumSayisi; Turkiye.dogumAta(dogumSayisi);
	cout<<"Olum Sayisini Giriniz: ";cin>>olumSayisi; Turkiye.olumAta(olumSayisi);
	cout<<"Dogum Oranini Giriniz: "; Turkiye.dogumOrani();<<endl;
	cout<<"Olum Oranini Giriniz: ";Turkiye.olumOrani();<<endl;
	
}
