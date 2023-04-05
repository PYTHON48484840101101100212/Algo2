#include <iostream>
using namespace std;
bool fun(int *a,int*b){
	return a==b;
}
int main{
int *x = new int;
int *y = new int;
cin>>*x>>*y;
cout<<fun(x,y);
return 0;
}
