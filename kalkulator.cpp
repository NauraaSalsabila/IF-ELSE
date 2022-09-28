#include <iostream>
using namespace std;
int main(){
	float a,b;
	char operasi;
	cin>>a>>b;
	cin>>operasi;
	
	if(operasi=='+'){
		cout<<a+b;
	} else if(operasi=='-'){
		cout<<a-b;
	} else if(operasi=='*'){
		cout<<a*b;
	} else if(operasi=='/'){
		cout<<a/b;
	}
	return 0;
}
