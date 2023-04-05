#include <iostream>
using namespace std;
void degistir(int &x,int &y,int &z){
	
int temp =x;
	
x=z;
z=y;
y=temp;	
}
int main(){
	
int x,y,z;

x=10;
y=30;
z=40;

degistir(x,y,z);

cout<<"x:"<<x<<endl;
cout<<"y:"<<y<<endl;
cout<<"z:"<<z<<endl;

return 0;
}



