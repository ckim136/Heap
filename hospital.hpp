//
// Created by kimem on 2019-12-06.
//

#ifndef HEAP_HOSPITAL_HPP
#define HEAP_HOSPITAL_HPP
#include <vector>

#include "heap.hpp"
#include "patient.hpp"


template<typename T>
class Hospital {
private:
    Hospital() = default;
public:
    Heap<T> patientList;

    static Hospital* h;


    static Hospital* getHospital() {
        if (h == nullptr) {
            h = new Hospital();
        }
        return h;
    }

    void addPatient(T p) {
        patientList.push(p);
    }


    T getHighestPatient() {
        return patientList.pop();
    }

    int getNumberofPatient(){
        return patientList.size();
    }


    void printPatients() {
        cout << patientList;
    }

    Hospital(Hospital const &) = delete;
    void operator=(Hospital const&) = delete;

};
template<typename T>
Hospital<T>* Hospital<T>::h = nullptr;
#endif //HEAP_HOSPITAL_HPP
