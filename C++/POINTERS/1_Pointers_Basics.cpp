#include <iostream>
using namespace std;

int main(){
	int *p, var;
	
	//Assign p with the address of var
	var = 24;
	p = &var;
	
	//Display the address of var
	cout<< p << endl;
	
	//Display the value of var using the pointer *p
	cout<< *p << endl;
	
	
	*p = 42;
	
	cout<< var << endl;
	cout<< *p << endl;
	
	
	//Assign p1 with the address of var1
	int var1 = 25;
	int *p1 = &var1;
	
	system("pause");
	return 0;
}
