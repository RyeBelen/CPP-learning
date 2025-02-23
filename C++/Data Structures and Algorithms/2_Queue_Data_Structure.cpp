#include <iostream>
#include <queue>

	// *****************************************************
		
	// Queue = FIFO data structure. First-In First-Out
	//		   A collection designed for holding elements prior to processing
	//		   Linear data structure
		
	//         enqueue = offer()  Add an element to the end of the queue
	//         dequeue = poll()   Remove an element from the front of the queue
		
	// Where are queues useful?
		
	// 1. Keyboard Buffer (letters should appear on the screen in the order they're pressed)
	// 2. Printer Queue (Print jobs should be completed in order)
	// 3. Used in LinkedLists, PriorityQueues, Breadth-first search
	
	// *****************************************************
/*
    push()	= inserts an element at the back of the queue
    pop()	= removes an element from the front of the queue
    front()	= returns the first element of the queue
    back()	= returns the last element of the queue
    size()	= returns the number of elements in the queue
    empty()	= returns true if the queue is empty	
*/
void printQueue(std::queue<int> queue);

int main(){

    system("cls");

    std::queue<int> MyQueue;
    MyQueue.push(1);
    MyQueue.push(2);
    MyQueue.push(3);
    MyQueue.push(4);
    MyQueue.push(5);

    // Tell the user if the queue is empty or not
    std::cout << "Is the queue empty? ";
    if(MyQueue.empty()){
        std::cout << "Yes\n";
    }
    else{
        std::cout << "No\n";
    }

    // Prints out the size of the queue
    std::cout << "The size of the Queue is: " << MyQueue.size() << '\n';

    // Prints out the first element in the queue
    std::cout << "The First Element in the Queue is: " << MyQueue.front() << '\n';

    // Prints out the last element in the queue
    std::cout << "The Last Element in the Queue is: " << MyQueue.back() << '\n';

    // Prints out the Queue
    std::cout << "Queue: ";
    printQueue(MyQueue);

    return 0;
}

void printQueue(std::queue<int> queue){
    while (!queue.empty()){
        std::cout << queue.front()<< ", ";
        queue.pop();                       // Removes the an element at the front
    }
}