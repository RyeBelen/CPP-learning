#include "ll.cpp"



int main(){

    LinkedList ls1;

    ls1.DisplayList();
    
    ls1.AddAtBeginning(1);
    ls1.DisplayList();
    
    ls1.AddAtEnd(2);
    ls1.DisplayList();
    
    ls1.AddAtEnd(3);
    ls1.DisplayList();
    
    ls1.AddAtEnd(5);
    ls1.DisplayList();
    
    ls1.AddAtPosition(4, 4);
    ls1.DisplayList();


    ls1.DeleteAtBeginning();
    ls1.DisplayList();

    ls1.DeleteAtEnd();
    ls1.DisplayList();

    ls1.DeleteAtPosition(2);
    ls1.DisplayList();
    
    return 0;
}