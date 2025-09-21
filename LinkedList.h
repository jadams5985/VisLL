#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <functional>

// Node class template
template<typename T>
class Node {
private:
    T data; // type T, can be anything
    Node<T>* next; // A pointer node that will point to the next element

    // Grant LinkedList access to private members
    template<typename> friend class LinkedList;

public:
    Node(T val) : data(val), next(nullptr) {} // constructor for the node that assigns the value to the data, and init the next node to a nullptr
};


// Linked List class template
template<typename T>
class LinkedList {
private:
    // keep track of the head and tail at all times!!!
    Node<T>* head; // The linked list has a pointer to the head so we know where the first element is
    Node<T>* tail; // The linked list has a pointer to the tail so that we know where the end of the list is
    size_t length; // make a length so that we can track how many elements are in our list
public:
    LinkedList() : head(nullptr), tail(nullptr), length(0) {} // constructor for the list, init the head to a nullptr so it doesn't pick up some garbage val

    // add an element to the back of the list
    void append(T value) {
        // check if there are already elements in the list, aka if the list's length > 0 there are elements in the list
        if (length == 0) {
            // there are no elements in the list
            Node<T> n = new Node<T>(value); // make a new node and pass it the value, it's next* is a nullptr
            head = n; // make the head point to the new node
            tail = n; // make the tail point to the new node
        }
        // there are elements in the list
        else {
            // update the 
            Node<T> n = new Node<T>(value); // make a new node, pass the value in, and it's next* is nullptr
            Node<T> temp = this->tail;

        }
        length++;
    }

    // add an element to the front of the list
    void addFirst(T value) {

    }

    // remove the first element of the list
    void deleteFirst() {

    }

    // remove the last element of the list
    void deleteLast() {

    }

    // remove an element at a specific index
    void deleteAtIndex(int index) {

        // Else index was out of bounds, do nothing
    }
    void forEach(std::function<void(const T&, bool)> callback) {
        Node<T>* current = head;
        while (current) {
            bool isLast = (current->next == nullptr);
            callback(current->data, isLast);
            current = current->next;
        }
    }

    ~LinkedList() {

    }
};

#endif // LINKEDLIST_H