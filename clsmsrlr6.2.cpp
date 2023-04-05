#include <iostream>
using namespace std;

int* kopya(int*a,int boyut){
	int *b = new int[boyut];
	for(int i=0;i<boyut;i++){
	 b[i] = a[i];
}	
return b;}
int main(){
	int a[5] = {1,3,5,7,9};
	int *b = kopya(a,5);
	for(int i=0;i<5;i++){
		cout<<b[i]<<" ";
	}
}
