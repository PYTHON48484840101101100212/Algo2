#include <iostream>
using namespace std;

void kopyala(int dizi[], int boyut) {
    int kopya[boyut-2];
    for (int i = 1; i < boyut-1; i++) {
        kopya[i-1] = dizi[i];
    }
    for (int i = 0; i < boyut-2; i++) {
        dizi[i+1] = kopya[i];
    }
}

int main() {
	int boyut,eleman;
	cout<<"Dizinin Boyutunu Giriniz: ";
	cin>>boyut;
    int dizi[boyut];
    cout<<"Dizinin Elemanlarini Giriniz: "<<endl;
    for(int i=1;i<=boyut;i++){
    	cout<<i<<". eleman:";
    	cin>>dizi[i];
	}
    
    kopyala(dizi, 5);
    
    // Dizinin ilk ve son elemanlari hariç kopyasini yazdirma
    for (int i = 2; i < 5; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;
    
    return 0;
}


