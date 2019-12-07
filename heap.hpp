//
// Created by kimem on 2019-12-06.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class Heap {

private:
    // make vector into a heap form
    void heapify() {
        make_heap(myHeap.begin(), myHeap.end());
    }

public:
    vector<T> myHeap;
    Heap(vector<T> myHeap = vector<T>()) : myHeap(myHeap){};
    //add new element
    void push(T t) {
        myHeap.push_back(t);
        heapify();
    }
    // pop the largest element
    T pop() {
        pop_heap(myHeap.begin(), myHeap.end());
        T maxHeap = myHeap.back();
        myHeap.pop_back();
        return maxHeap;
    }

    // return the size of the heap
    int size() {
        return myHeap.size();
    }

//check if the heap is empty
    bool is_empty() {
        return myHeap.empty();
    }
//clear the heap
    void clear() {
        myHeap.clear();
    }

// overloaded operator
    friend ostream& operator<<(ostream& os, const Heap& h) {

        for (auto it = h.myHeap.begin(); it != h.myHeap.end(); ++it) {
            os << it->person.second << " ";
        }

        os << endl;
        return os;
    }
};
#endif //HEAP_HEAP_HPP
