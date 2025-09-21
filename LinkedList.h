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
    Node<T>* head; // The linked list has a pointer that points to the first element

public:
    LinkedList() : head(nullptr) {} // constructor for the list, init the head to a nullptr so it doesn't pick up some garbage val

    // add an element to the back of the list
    void append(T value) {

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