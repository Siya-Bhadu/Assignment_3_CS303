// Assignment_3_CS303.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Siya Bhadu

#include <iostream>
#include <vector>
using namespace std;

// Question 1:
// Node structure to represent each element in the queue
template <typename T>
struct Node {
    T data;
    Node* next;
    Node(T val) : data(val), next(nullptr) {}
};

// Queue class template
template <typename T>
class Queue {
private:
    Node<T>* frontNode; // Front of the queue
    Node<T>* rearNode; // Rear of the queue
    int queueSize; // Size of the queue

public:
    // Constructor
    Queue() : frontNode(nullptr), rearNode(nullptr), queueSize(0) {}

    // Destructor to clean up memory
    ~Queue() {
        while (!empty()) {
            pop();
        }
    }

    // Push an element into the queue
    void push(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (empty()) {
            frontNode = rearNode = newNode;
        }
        else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        queueSize++;
    }


    // Pop an element from the queue
    void pop() {
        if (empty()) {
            cout << "Queue is empty, cannot pop!" << endl;
            return;
        }
        Node<T>* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
        queueSize--;
        if (empty()) {
            rearNode = nullptr; // If the queue is empty, reset rearNode
        }
    }


    // Get the front element of the queue
    T front() {
        if (empty()) {
            throw out_of_range("Queue is empty!");
        }
        return frontNode->data;
    }

    // Get the size of the queue
    int size() {
        return queueSize;
    }


    // Check of the queue is empty
    bool empty() {
        return queueSize == 0;
    }


    // Move the element at the front to the rear of the queue
    void move_to_rear() {
        if (empty() || queueSize == 1) {
            return; // Nothing to move if empty or if there's just one element
        }
        T frontValue = front(); // Get the front element
        pop(); // Remove the front element
        push(frontValue); // Move it to the rear
    }

    // Display queue using only queue operations
    void display() {
        int n = size();
        cout << "[ ";
        for (int i = 0; i < n; i++) {
            T val = front();
            cout << val;
            if (i < n - 1) cout << ", ";
            pop();
            push(val);   // restore order
        }
        cout << " ]" << endl;
    }

    // Question 3:
    // Sort the queue using insertion sort
    void insertion_sort_queue() {
        // Extract elements from the queue into a vector
        vector<T> elements;
        Node<T>* temp = frontNode;
        while (temp) {
            elements.push_back(temp->data);
            temp = temp->next;
        }

        // Sort the vector using the insertion_sort function
        insertion_sort(elements);

        // Rebuild the queue with the sorted elements
        while (!empty()) {
            pop(); // Clear the existing queue
        }

        // Push the sorted elements back into the queue
        for (T value : elements) {
            push(value);
        }
    }

    void insertion_sort(std::vector<int>& num) {
        int i, j, key;

        bool insertionNeeded = false;

        for (j = 1; j < num.size(); j++) {
            key = num[j];
            insertionNeeded = false;
            for (i = j - 1; i >= 0; i--) {
                if (key < num[i]) {
                    num[i + 1] = num[i]; // larger values move right
                    insertionNeeded = true;
                }
                else
                    break;
            }
			if (insertionNeeded)
				num[i + 1] = key; // Put key into its proper location

        }
    }
};

// Question 2:
template <typename Item_Type>
int linear_search(vector<Item_Type>& items, Item_Type& target, size_t pos_first) {
    // Base case: If we've reached the end of the vector, return -1 (target not found)
    if (pos_first == items.size()) {
		return -1;
    }

    // Recur to the next position to search
    int index = linear_search(items, target, pos_first + 1);

    // If we found the target in the subsequent recursive call, return the index
    if (index != -1) {
        return index;
    }

    // If the current position matches the target, return this index
    if (items[pos_first] == target) {
        return pos_first;
    }

    // If the target is not found, return -1
    return -1;
}

// Function to display the contents of a vector
template <typename T>
void display_vector(const vector<T>& vec) {
    cout << "[ ";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

// Main function to perform the operations
int main()
{
    // Q1. a) Instantiate the queue with integers and push 10 values
    Queue<int> q;

    // Push 10 values into the queue
    for (int i = 10; i >= 1; i--) { // Pushing values in reverse order
        q.push(i);
    }

    // Q1. b) Display all elements in a queue (using queue operations)
    cout << "Queue Contents: ";
    q.display(); // Using the display function to show all elements

	// Q3. Sort the queue using insertion sort
    cout << "Sorting queue contents: ";
    q.insertion_sort_queue();
	q.display();

    // Q1. c) Move the front element to the rear using the move_to_rear function
    cout << "Moving the front element to the rear... " << endl;
    q.move_to_rear();

    // Display the queue after moving the front element to the rear
    cout << "Queue after move_to_rear: ";
    q.display();

    // Demonstrate pop(), front(), size(), and empty() functions
    // Pop:
    cout << "Popping an element from the queue... " << endl;
    q.pop();
    cout << "Queue after pop: ";
    q.display(); // Displays the queue
    // Front:
	cout << "Front element: " << q.front() << endl;
    // Size:
    cout << "Queue size: " << q.size() << endl;
    //Empty:
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Q2. Linear Search to find the last occurrence of a target in a vector
    // Define the vector and fill the values
    vector<int> items = { 1, 7, 3, 4, 5, 6, 7, 8, 7, 10 };
    int target = 7;
    // Show the items that are found in the vector
    cout << "Vector Contents: ";
    display_vector(items);
    // Start searching from the first position
    int result = linear_search(items, target, 0);
    // Check to find the last occurance of the item by index
    if (result != -1) {
        cout << "The last occurence of target " << target << " is at index: " << result << endl;
    }
    else {
        cout << "Target " << target << " not found in the vector. " << endl;
    }
    return 0;

}

