#include <iostream>
#include <string>
using namespace std;
class telefonRehberi{
	
	string *isimler;
	long *telefonlar;
	public:
		
		telefonRehberi(string *_isimler,long *_telefonlar):isimler(_isimler),telefonlar(_telefonlar){}
		telefonRehberi(telefonRehberi &rehber);
		void yazdir();
};
telefonRehberi::telefonRehberi(telefonRehberi &rehber){
	isimler = rehber.isimler;
	telefonlar = rehber.telefonlar;
}
void telefonRehberi::yazdir() {
for(int i=0;i<5;i++){
	cout<<isimler[i]<<" "<<telefonlar[i]<<endl;
}
}

int main(){
	string isimler[] = {"Ayda","Sener","Ali","Veli","Enes"};
	long telefonlar[] = {11111,22222,33333,44444,55555,6666};
	telefonRehberi rehber1(isimler,telefonlar);
	telefonRehberi rehber2(rehber1);
	rehber2.yazdir();
}
