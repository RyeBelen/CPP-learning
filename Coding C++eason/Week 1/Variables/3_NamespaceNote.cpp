#include <iostream>
using std::cout;
using std::string;

//  Namespace = provides a solition for preventing name conflict
//              in large projects. Each entity needs a unique name.
//              A namespace allows for identically named entities 
//              as long as the namespaces are different.



//  Example:

//   " cout << x; "          will display 0

//   " cout << first::x; "   will display 1

//   " cout << second::x; "  will display 2
   

namespace first {
    string x = "hatdog";
}

namespace second {
    int x = 6;
}

int main (){
    using namespace second;
   
    cout << x;

    return 0;
}