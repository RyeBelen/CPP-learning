#include <iostream>
using namespace std;

double square(double length);
double cube(double lenght);

int main ()
{
    double length;
    cin >> length;
    double area = square(length);
    double volume = cube(length);

    cout << "Area " << area << "cm^2\n";
    cout << "Volume " << volume << "cm^3\n";

    return 0;
}



double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}




/*
double square(double lenght);
double cube(double lenght);

int main ()
{
    // return = return a value back to the spot
    //          where you called the encompasing function

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    cout << "Area " << area << "cm^2\n";
    cout << "Volume " << volume << "cm^3\n";
    return 0;
}

double square(double lenght){
    return lenght * lenght;
}
double cube(double lenght){
    return lenght * lenght * lenght;
}
*/









/*
string concatstring(string fn, string ln);

int main ()
{   
    string fn,ln, fullname;

    cout << "Enter your first name: "; getline(cin, fn);
    cout << "Enter your last name: "; getline(cin, ln);

    fullname = concatstring(fn, ln);

    cout << "Hello " << fullname;

    return 0;
}

string concatstring(string fn, string ln)
{
  return fn + " " + ln;
}

*/

