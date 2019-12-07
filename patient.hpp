//
// Created by kimem on 2019-12-06.
//

#ifndef HEAP_PATIENT_HPP
#define HEAP_PATIENT_HPP
#include <utility>
#include <string>

class Patient {
public:
    //pair, first: name
    //      second: severity
    std::pair<std::string, int> person;

    Patient(std::string name, int severity) : person(name, severity){}

    bool operator<(const Patient& p) {
        return person.second < p.person.second;
    }
};
#endif //HEAP_PATIENT_HPP
