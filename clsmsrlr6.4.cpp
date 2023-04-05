#include <iostream>
using namespace std;

int main(){
	int dizi[5];
	int *pointer;
	pointer =dizi;
	*pointer=5;
	pointer++;
	*pointer=15;
	pointer=&dizi[2];
	*pointer =20;
	pointer = dizi+3;
	*pointer =25;
	pointer=dizi;
	*(pointer+4)=30;
	for(int i=0;i<5;i++){
		cout<<dizi[i]<<endl;
		
	}
	return 0;
}
