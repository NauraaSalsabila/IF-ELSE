#include <iostream>
using namespace std;
int main(){
	int angka;
	cin>>angka;
	
	if (angka%2!=0 && angka%3!=0 && angka%5!=0 && angka%7!=0 && angka%11!=0 && 
	angka%13!=0 && angka%17!=0 && angka%19!=0  && angka%23!=0 && angka%29!=0){
		cout<<"Bilangan Prima";
	} else if (angka%2!=0 && angka%3!=0 && angka%5!=0 && angka%7!=0 && angka%11!=0 && 
	angka%13!=0 && angka%17!=0 && angka%19!=0  && angka%23!=0 && angka%29!=0) {
		cout<<"Bukan Bilangan Prima";
	}
	return 0;
}
