#include <iostream>
using namespace std;

int main(){
	int var1, var2, *p1, *p2;
	
	//Assign *p1 with the address of var and *p2 with the address of var2
	var1 = 10;
	p1 = &var1;
	
	var2 = 20;
	p2 = &var2;
	
	
	//Display the address of var1 and var2 using pointers
	cout<< p1 << endl;
	cout<< p2 << endl;
	
	
	
	//Display the value of var1 and var2 using pointers
	cout<< *p1 << endl;
	cout<< *p2 << endl;
	
	
	
	//Make p1 point to var2 by giving it the address of var2 using p2
	p1 = p2;
	
	//Display the address of var1 and var2 using pointers
	cout<< p1 << endl;
	cout<< p2 << endl;
	
	//Display the value of var1 and var2 using pointers
	cout<< *p1 << endl;
	cout<< *p2 << endl;
	
	
	
	
	//Change the value of var1 by giving it the value of var2 using pointers
	*p1 = *p2;
	
	
	
	cout<< "VALUES POINTED BY P1 and P2" << endl;
	cout<< *p1 << endl;
	cout<< *p2 << endl;
	
	cout<< "\n\n";
	
	cout<< "ADDRESSES POINTED BY P1 and P2" << endl;
	cout<< p1 << endl;
	cout<< p2 << endl;
	
	system("pause");
	return 0;
}
