#include <iostream>
#include"hospital.hpp"
int main() {
//used singleton design pattern
    Hospital<Patient>* s = Hospital<Patient>::getHospital();
    vector<Patient> patients;

    patients.emplace_back("p1", 3);
    patients.emplace_back("p2", 1);
    patients.emplace_back("p3", 7);
    patients.emplace_back("p4", 4);
    patients.emplace_back("p5", 9);
    patients.emplace_back("p6", 5);

    for (auto it = patients.begin(); it != patients.end(); ++it) {
        s->addPatient(*it);
    }
    s->printPatients();
    cout << "The first patient is with severity of " << s->getHighestPatient().person.second<< endl;
    cout << "Remaining patients: " << s->getNumberofPatient()<< endl;
    s->printPatients();
    cout << "The second patient is with severity of " << s->getHighestPatient().person.second<< endl;
    cout << "Remaining patients: " << s->getNumberofPatient()<< endl;
    s->printPatients();



    return 0;
}