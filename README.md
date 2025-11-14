# Assignment 3 - CS303 (Data Structures)
## Name: Siya Bhadu  

## Description
This C++ program demonstrates multiple data structure operations, including Queue Implementation, Recursive Linear Search, and Insertion Sort.  

The program implements a Queue using a linked list, supporting the following operations:  

- `push()` – Adds an element to the rear of the queue.  
- `pop()` – Removes the element at the front of the queue.  
- `front()` – Returns the element at the front without removing it.  
- `size()` – Returns the number of elements in the queue.  
- `empty()` – Checks if the queue is empty.  
- `move_to_rear()` – Moves the element currently at the front to the rear.  
- `display()` – Shows all elements in the queue using only queue operations.  
- `insertion_sort_queue()` – Sorts all elements in the queue in ascending order using insertion sort.  

The program demonstrates the queue operations by instantiating a queue of integers, pushing ten values into it, displaying all elements, sorting the queue, moving the front element to the rear, and demonstrating `pop()`, `front()`, `size()`, and `empty()` functions.  

The program also implements a recursive linear search that finds the last occurrence of a target value in a vector. The search starts from the first position, recurses through the vector, and returns the index of the last occurrence if the target is found, or -1 if it does not exist.  

## Operations Performed
1. Instantiate the queue with integers.  
2. Push 10 values into the queue.  
3. Display all elements in the queue using only `push()`, `pop()`, `front()`, and `size()`.  
4. Sort the queue in ascending order using the modified insertion sort function.  
5. Move the front element to the rear of the queue using the `move_to_rear()` function.  
6. Pop an element from the queue and display the updated queue.  
7. Retrieve and display the front element of the queue.  
8. Display the current size of the queue.  
9. Check if the queue is empty.  
10. Perform a recursive linear search on a vector to find the last occurrence of a target value and display its index.

## Files
- `Assignment2_CS303_Q1.cpp` – Main program with queue implementation and operations.  
- `Assignment2_CS303_Q1.h` – Header file containing the queue class declaration.  

## How to Run
1. Open the project in your C++ IDE (Visual Studio).  
2. Make sure `Assignment2_CS303_Q1.h` is in the same project directory as `Assignment2_CS303_Q1.cpp`.  
3. Build and run the program.  

## Sample Output

<img width="1726" height="915" alt="Screenshot 2025-11-14 165629" src="https://github.com/user-attachments/assets/7e91aa20-1191-456b-84d3-ba51ae6d603d" />
