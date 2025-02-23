#include <iostream>
using namespace std;

int main(){
	int *p1, *p2; //init ka muna ng dalawa pointer
	
	p1 = new int; //gumawa ka ng variable na tinuturo ni p1 pero wala naman siyang pangalan
	
	*p1 = 42;		//yung tinuturo ni p1 gawin nating equals to 42
	
	p2 = p1;		//yung p2 tumuro ka rin sa p1
	
	cout<< "p1 = " << *p1 << endl;
	cout<< "p2 = " << *p2 << endl;
	
	cout<< "address of p1 = " << p1 << endl;
	cout<< "address of p2 = " << p2 << endl;
	
	*p2 = 53;
	
	cout<< "p1 = " << *p1 << endl;
	cout<< "p2 = " << *p2 << endl;
	
	cout<< "address of p1 = " << p1 << endl;
	cout<< "address of p2 = " << p2 << endl;
	
	
	*p1 = 88;
	
	
	cout<< "p1 = " << *p1 << endl;
	cout<< "p2 = " << *p2 << endl;
	
	return 0;
}
