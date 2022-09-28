#include <iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	if (x==0){
		cout<<"nol";
	} else if (x>0) {
		cout<<"positif"<<endl;
	} else {
		cout<<"negatif";
	} 
	
	if (x%2==0){
		cout<<"genap";
	} else{
		cout<<"ganjil";
	}
	return 0;
}
