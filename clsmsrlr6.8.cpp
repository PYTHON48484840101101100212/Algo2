#include <iostream>
using namespace std;
class Saat{
	int saat;
	int dakika;
	public:
		void kur(int _saat,int _dakika);
		void arttir();
		void goster();
		
};
void Saat::kur(int _saat,int _dakika){
saat = _saat;
dakika = _dakika;
}
void Saat::arttir(){
	dakika++;
	if(dakika==60){
		saat++;
		dakika=0;
	}                      //iki if,es zamanlı olarak calismasi lazim o yuzden else if yazmadim.
	if(saat==24){
		saat=0;
	}
}
void Saat::goster(){
cout<<"Saat: "<<saat<<":"<<dakika;
}
int main(){
Saat saat_suan(14,55);
cout<<"10 Dakika Boyunca...";
for(int i=0;i<10;i++){                // 10 dakika calisacak 
	saat_suan.goster();
	saat_suan.arttir();
}	
	return 0;
}
