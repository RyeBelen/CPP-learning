#include <iostream>
#include <stack>

    // stack = LIFO data structure. Last-in First-out
    //         stores object into a sort of "vertical tower"
    //         push() to add to the top
    //         pop() to remove from the top

    /*
        push()  =   adds an element into the stack
        pop()   =	removes an element from the stack
        top()   =   returns the element at the top of the stack
        size()  =	returns the number of elements in the stack
        empty() =	returns true if the stack is empty
    */

    // Uses of stacks?
    // 1. undo/redo features in text editors
    // 2. moving back/forward through browser history
    // 3. backtracking algorithm (maze, file directories)
    // 4. calling functions (call stack)

void DisplayStackElements(std::stack<int> stack);





int main(){

    system("cls");

    // create a stack of strings
    std::stack<int> stack;

    // push elements into the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    // Checks whether or not a stack is empty
    if(stack.empty()){
        std::cout << "Stack is empty\n";
    }
    else{
        std::cout << "Stack is not empty\n";
    }

    // Displays the size of a stack
    std::cout << "Stack size: " << stack.size() << '\n';

    // DIsplays the top element
    std::cout << "Top Element: " << stack.top() << '\n';
    

    // Invokes the function that prints out the Elements in a stack
    std::cout << "Stack : ";
    DisplayStackElements(stack);

    /*
    for(int i = 0; i <1000000000; i++ ){
        stack.push(1);
        std::cout << stack.top();
    }*/

    return 0;
}

void DisplayStackElements(std::stack<int> stack){

    // print elements of stack
    while(!stack.empty()){ 
        if(stack.top() == 1){
            std::cout << stack.top() << " ";
            break;
        }
        else if(stack.top() != 1){        // Repeats entire proccess until stack is empty
        std::cout << stack.top() << ", "; // Prints out the top element of the stack
        stack.pop();                      // Removes the top element of the stack
        }
    }

}