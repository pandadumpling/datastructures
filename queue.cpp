#include <iostream>
#include<cstdlib>

// define default capacity of the queue
#define SIZE 10
using namespace std;

// Create class for queue
class queue
{
    int *arr;           //array to store queue elements
    int capacity;       //maximum capacity of the queue
    int front;           //front points to front elements in the queue
    int rear;           //rear points to the last element in the queue
    int count;          //current size of the queue
    
public:
    queue(int size=SIZE);
    void dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};

// Constructor to initialize queue
queue::queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 1;
    
}

// Utitlity function to remove element from the queue
void queue::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Removing " << arr[front] << '\n';
    
    front = (front + 1) % capacity;
    count--;
}

// Utility to add an item to  the end of the queue
void queue::enqueue(int item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "OverFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Inserting " << item << '\n';
    
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}


// Utility function to return the size of the queue
int queue::size()
{
    return count;
}

// Utility to check if queue is full or not
bool queue::isFull()
{
    return (size()==capacity);
}

// Utioity to check if the queue is empty
bool queue::isEmpty()
{
    return (size()==0);
}

int queue::peek()
{
    if(isEmpty())
    {
        cout <<"UnderFlow \n Program Terminated \n";
        exit(EXIT_FAILURE);
    }
    
    return(arr[front]);
}

int main() {
    // Create a queue with capacity of 8
    queue q(8);
    
    q.enqueue(4);
    q.enqueue(8);
    q.enqueue(1);
    q.enqueue(23);
    q.enqueue(9);
    
    cout << "Front element is: "<<q.peek() << endl;
    q.dequeue();
    
    cout << "Queue size is "<<q.size() << endl;
    
    q.dequeue();
    q.dequeue();
    
    if (q.isEmpty())
        cout << "Queue is empty \n";
    else
        cout << "Queue is not empty \n";
    
    return 0;
}






