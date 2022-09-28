#include <iostream>
using namespace std;
int main(){
	int x,y,a,b,c,d;
	cin>>x>>y;
	
	a= 5; //jarak 1-2
	b= 8; //jarak 2-3
	c= 7; //jarak 3-4
	d= 3; //jarak 4-5
	 
	if (x==1&&y==2){
		cout<<a;
	} else if (x==1&&y==3){
		cout<<a+b;
	} else if (x==1&&y==4){
		cout<<a+b+c;
	} else if (x==1&&y==5){
		cout<<a+b+c+d;
	} else if (x==2&&y==3){
		cout<<b;
	} else if (x==2&&y==4){
		cout<<b+c;
	} else if (x==2&&y==5){
		cout<<b+c+d;
	} else if (x==3&&y==4){
		cout<<c;
	} else if (x==3&&y==5){
		cout<<c+d;
	} else if (x==4&&y==5){
		cout<<d;
	} else{
		cout<<"Error";
	}
	return 0;
}
