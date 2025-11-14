# Assignment 2 - CS303 (Data Structures)
**Name:** Siya Bhadu  

## Description
This C++ program implements a **Queue** data structure using a template class (linked list or circular array) and demonstrates its operations. The program performs the following:  

- `push()` – Adds an element to the rear of the queue.  
- `pop()` – Removes the element at the front of the queue.  
- `front()` – Returns the element at the front without removing it.  
- `size()` – Returns the number of elements in the queue.  
- `empty()` – Checks if the queue is empty.  
- `move_to_rear()` – Moves the element currently at the front of the queue to the rear of the queue.  

The queue is **templated**, so it can work with any data type.  

## Operations Performed
1. Instantiate the queue with integers.  
2. Push 10 values into the queue.  
3. Display all elements in the queue using only `push()`, `pop()`, `front()`, and `size()`.  
4. Move the front element to the rear of the queue using the new `move_to_rear()` function.  

## Files
- `Assignment2_CS303_Q1.cpp` – Main program with queue implementation and operations.  
- `Assignment2_CS303_Q1.h` – Header file containing the queue class declaration.  

## How to Run
1. Open the project in your C++ IDE (Visual Studio).  
2. Make sure `Assignment2_CS303_Q1.h` is in the same project directory as `Assignment2_CS303_Q1.cpp`.  
3. Build and run the program.  
4. Follow the on-screen prompts to:  
   - Push 10 integers into the queue.  
   - Display all queue elements.  
   - Move the front element to the rear and display the updated queue.  

## Sample Output
**Queue after pushing 10 values:**  
