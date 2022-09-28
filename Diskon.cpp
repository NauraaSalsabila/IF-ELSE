#include <iostream>
using namespace std;
int main(){
	float harga;
	cin>>harga;
	if (harga<149000){
		cout<<harga;
	} else if (harga<249000){
		cout<<harga-(harga*10/100);
	} else if (harga<349000){
		cout<<harga-(harga*20/100);
	} else if (harga<449000){
		cout<<harga-(harga*30/100);
	} else if (harga<549000){
		cout<<harga-(harga*40/100);	
	} else if (harga>549000){
		cout<<harga-(harga*50/100);
	}
	return 0;
}
