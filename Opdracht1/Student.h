//
// Created by User on 15-11-2018.
//

#ifndef OPDRACHT1_STUDENT_H
#define OPDRACHT1_STUDENT_H
#include <string>
#include <vector>
#include "Module.h"

using namespace std;

class Student {
public:
    Student();
    Student(string naam);
    void addToVector(Student s);
    void createStudents();
    void wijsModuleAanStudent(Module m); //Zit dit in de juiste class? Kan ik er ook gelijk 3 meegeven?
    void toonECs();
private:
    string naam;
    vector<Student*> studenten;
    vector<Module> modules; //Student kan meerdere modules volgen

};


#endif //OPDRACHT1_STUDENT_H
