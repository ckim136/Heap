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

    void heapify() {
        make_heap(myHeap.begin(), myHeap.end());
    }

public:
    vector<T> myHeap;
    Heap(vector<T> myHeap = vector<T>()) : myHeap(myHeap){};

    void push(T t) {
        myHeap.push_back(t);
        heapify();
    }

    T pop() {
        pop_heap(myHeap.begin(), myHeap.end());
        T maxHeap = myHeap.back();
        myHeap.pop_back();
        return maxHeap;
    }


    int size() {
        return myHeap.size();
    }


    bool is_empty() {
        return myHeap.empty();
    }

    void clear() {
        myHeap.clear();
    }


    friend ostream& operator<<(ostream& os, const Heap& h) {

        for (auto it = h.myHeap.begin(); it != h.myHeap.end(); ++it) {
            os << it->person.second << " ";
        }

        os << endl;
        return os;
    }
};
#endif //HEAP_HEAP_HPP
