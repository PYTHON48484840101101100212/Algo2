#include <iostream>
using namespace std;
void oku(int[],int);
int main() {
	int mevcut,toplam =0;
	int enYuksek = 0;
	int *notlar;
	cout<<"Sinif Mevcudunu Giriniz: ";
	cin>>mevcut;
	notlar = new int[mevcut];
	oku(notlar,mevcut);
	
	for(int i =0;i<mevcut;i++){
	toplam += notlar[i];
	if(notlar[i]>enYuksek) enYuksek = notlar[i];
	}
	
	cout<<"Sinif Ortalamasi: "<<toplam/mevcut<<endl;
	cout<<"En Yuksek Not: "<<enYuksek;
	delete []notlar;
	return 0;
}
void oku(int notDizi[],int boyut){
	cout<<"Notlari Giriniz: ";
	for(int i=0;i<boyut;i++){
		cin>>notDizi[i];
	}
}
