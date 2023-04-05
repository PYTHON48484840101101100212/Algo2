#include <iostream>
using namespace std;
int main(){
	int dsure,sonuc,a,degisim;
	 //Haftalik kilo
	cout<<"Diyet Programinizin HAFTA suresini giriniz: ";
	cin>>dsure;
	int kilo[dsure];
	for(int i=1;i<dsure+1;i++){
		
		cout<<i<<". Haftaki Kilonuzu Girin: "<<endl;
		cin>>kilo[i];
		}
		if(kilo[1]<kilo[dsure]){
			degisim = kilo[dsure] - kilo[1];
			cout<<degisim<<" kg aldiniz";
		}
		else if(kilo[dsure]<kilo[1]){
			degisim = kilo[1] - kilo[dsure];
			cout<<degisim<<" kg kaybettiniz";
			}
		else {
		 cout<<"Kilonuz Ayni";
		 	}
return 0;
}
